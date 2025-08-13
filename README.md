# README

- 신나게 코딩할 공간

# Actions
- release시 업로드 시 옵션
```
Repo → Settings → Actions → General
Workflow permissions: Read and write permissions로 변경
```

# Commands
## 로그 이쁘게 보기

```console
git log --pretty=format:"%C(auto)%h %C(bold blue)%an%C(reset): %s %C(green)(%ad)" --date=short
git log --graph --oneline --decorate --all
```

# License
MIT