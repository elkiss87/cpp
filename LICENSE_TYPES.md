# License Types in Software Development

## 1. **Permissive License (제한이 적은 자유로운 라이선스)**

> 거의 모든 용도(상업, 수정, 재배포)가 가능. 출처 표기만 요구.

* **MIT**

  * 가장 간단하고 많이 쓰이는 라이선스.
  * 조건: 원 저작권 표시와 라이선스 사본 포함.
  * 특징: 코드 재사용, 상업용, 수정, 재배포 다 허용.
* **Apache-2.0**

  * MIT보다 조금 더 길고 특허권 관련 보호 조항 포함.
  * 상표권/특허 사용 관련 내용이 있어 기업에서 선호.
* **BSD-2-Clause / BSD-3-Clause**

  * MIT와 비슷하지만, **브랜드/이름 사용 제한**이 있음(BSD-3-Clause).
  * “소프트웨어로 파생된 제품의 홍보에 원 저작자 이름을 쓰면 안 됨” 같은 조항.

---

## 2. **Copyleft License (변경 사항도 공개 강제)**

> 소스코드를 공개해야 하고, 파생 저작물도 동일 라이선스를 유지해야 함.

* **GPL (GNU General Public License)**

  * 강력한 Copyleft.
  * 수정/재배포 시 전체 소스코드를 공개해야 하고, 동일 GPL로 배포.
* **LGPL (Lesser GPL)**

  * 라이브러리용 GPL.
  * 라이브러리를 링크만 하는 경우는 코드 공개 의무 없음.
* **AGPL (Affero GPL)**

  * GPL + 네트워크 사용 시 소스 공개 의무 추가(웹서비스에 적용됨).

---

## 3. **기타 특수 라이선스**

* **MPL (Mozilla Public License)**

  * 변경한 파일만 공개하면 되고, 전체를 공개할 필요 없음.
  * 상업적 제품에 포함 가능.
* **Creative Commons(CC)**

  * 문서, 이미지, 음악 같은 창작물에 주로 사용.
  * CC-BY, CC-BY-SA, CC0(퍼블릭 도메인) 등 세부 규칙 존재.

---

## 4. **Proprietary / All Rights Reserved**

* **All rights reserved**

  * 모든 권리를 저작권자가 가짐. 사용, 배포, 수정 전부 허가 필요.
* **Custom License**

  * 회사나 개인이 직접 만든 독자적인 계약 조건.

---

💡 **요약 선택 가이드**

* “마음대로 써도 좋다, 출처만 남겨라” → **MIT**
* “MIT + 특허 조항” → **Apache-2.0**
* “MIT + 이름/브랜드 사용 제한” → **BSD**
* “변경하면 무조건 공개해야 함” → **GPL**
* “변경한 파일만 공개” → **MPL**
* “상업/외부 사용 금지” → **All rights reserved**

---