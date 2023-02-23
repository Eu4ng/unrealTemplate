# UnrealTemplate
언리얼 엔진의 플러그인 템플릿

# 사용법
## 언리얼 템플릿으로 설정
- `UnrealTemplate` 폴더를 복사해서 `Program Files > Unreal Engine[Version] > Templates` 폴더에 붙여넣는다.
- `Unreal Engine Lancher`를 실행한 후, `언리얼 프로젝트 브라우저 > 게임 > 언리얼 플러그인`을 선택한 후 프로젝트를 생성한다.
- 참고 링크 : [프로젝트를 템플릿으로 변화하기 | 언리얼 엔진 문서](https://docs.unrealengine.com/4.27/ko/Basics/Projects/CreatingTemplates/) 

## 기존 프로젝트에 적용
`UnrealTemplate > Plugins` 폴더를 복사해서 프로젝트 폴더에 붙여넣는다.
- 프로젝트 폴더는 `Config`, `Content`, `Source`의 부모 폴더를 가리킨다. 여기서는 `UnrealTemplate`이 해당된다.
- 이미 `Plugins` 폴더가 존재한다면 `Plugins` 폴더 안의 `PluginTemplate`만 복사하여 프로젝트의 `Plugins` 폴더 안에 붙여넣는다.

# 플러그인 및 모듈 이름 수정
- `PluginTemplate`을 원하는 플러그인 이름으로 수정 및 내용 편집
  - `PluginTemplate` 폴더, `PluginTemplate.uplugin`
- `PluginTemplate > Template`을 원하는 모듈 이름으로 수정
  - `Template` 폴더, `Template.Build.cs`, `Public > TemplateModule.h`, `Private > TemplateModule.cpp`, `Private > Logging.h`, `Private > Logging.cpp`

  