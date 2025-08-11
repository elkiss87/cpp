#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#pragma comment(lib, "Ws2_32.lib")

int main()
{
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
    {
        std::cerr << "WSAStartup failed\n";
        return 1;
    }

    SOCKET listenSock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (listenSock == INVALID_SOCKET)
    {
        std::cerr << "socket failed\n";
        WSACleanup();
        return 1;
    }

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(4885); // listening port
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(listenSock, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) == SOCKET_ERROR)
    {
        std::cerr << "bind failed\n";
        closesocket(listenSock);
        WSACleanup();
        return 1;
    }

    if (listen(listenSock, SOMAXCONN) == SOCKET_ERROR)
    {
        std::cerr << "listen failed\n";
        closesocket(listenSock);
        WSACleanup();
        return 1;
    }

    std::cout << "Listening on port 4885... (Ctrl+C to exit)\n";

    sockaddr_in clientAddr{};
    int clientLen = sizeof(clientAddr);
    SOCKET clientSock = accept(listenSock, reinterpret_cast<sockaddr*>(&clientAddr), &clientLen);
    if (clientSock != INVALID_SOCKET)
    {
        std::cout << "Client connected!\n";
        closesocket(clientSock);
    }

    closesocket(listenSock);
    WSACleanup();
    return 0;
}