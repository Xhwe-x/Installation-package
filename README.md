# 🧰 Windows 必备经典老版本软件留档库

> **个人电脑重装系统必备软件留档**  
> 偏好经典历史老版本软件（纯净轻便、无臃肿无广告、无多余虚幻引擎组件、无强制更新），适合重装系统后一键部署还原。

---

## 📂 软件目录与分类索引

| 类别 | 软件名称 | 版本号 / 说明 | 存放位置 / 获取方式 |
| :--- | :--- | :--- | :--- |
| **01 社交通讯** | **腾讯 QQ** | `9.7.25.29417`（经典版，无虚幻引擎臃肿功能） | [Releases 下载](https://github.com/Xhwe-x/Installation-package/releases) |
| | **微信电脑版** | `4.1.6`（纯净稳定版） | [Releases 下载](https://github.com/Xhwe-x/Installation-package/releases) |
| **02 办公文档** | **WPS Office** | `15374`（稳定纯净版，去除弹窗推广） | [Releases 下载](https://github.com/Xhwe-x/Installation-package/releases) |
| | **Typora** | Windows 64位版（经典 Markdown 离线编辑器，附 `app.asar`） | 仓库内直接集成 |
| | **PDFBinder** | `v1.2` 绿色汉化版（极简单文件 PDF 合并工具） | 仓库内直接集成 |
| **03 系统工具** | **Geek Uninstaller** | `geek.exe` 单文件绿色版（深度卸载与残留注册表清除） | 仓库内直接集成 |
| | **Uninstall Tool** | `v3.8.1.5740` 便携版（强力安装跟踪与干净卸载） | 仓库内直接集成 |
| **04 下载网络** | **IDM** | `v6.43 Build 10`（多线程下载利器，附一键激活脚本） | 仓库内直接集成 |
| **05 桌面美化** | **Rainmeter** | `v4.5.26`（雨滴桌面美化平台，附精选 Skins 皮肤） | 仓库内直接集成 |
| | **TranslucentTB** | 任务栏透明化工具 | 仓库内直接集成 |
| | **Winstep Nexus** | 仿 macOS 动效 Dock 栏（含 `wsbackup` 预设参数） | 仓库内直接集成 |
| **06 工程制图** | **AutoCAD 2024** | 官方安装包（分卷压缩，免去版本冲突） | [Releases 下载](https://github.com/Xhwe-x/Installation-package/releases) |
| | **天正电气 T20** | `V10.0`（建筑电气设计专业套件） | [Releases 下载](https://github.com/Xhwe-x/Installation-package/releases) |
| | **CAD 字体大全** | 6088个精选 `shx` / `ttf` 字体（杜绝图纸文字显示问号） | [Releases 下载](https://github.com/Xhwe-x/Installation-package/releases) |

---

## 🛠️ 安装与配置说明

### 1. Typora Markdown 编辑器配置
1. 安装 `02_办公文档/Typora/Windows 64位版本.exe`。
2. 安装完成后，将目录下的 `app.asar` 复制并替换到 Typora 安装目录下的 `resources` 文件夹中即可。

### 2. IDM 下载神器激活
1. 安装 `04_下载网络/IDM/idman643build10.exe`。
2. 双击运行 `04_下载网络/IDM/IDM_激活说明.bat`，或根据 `IDM-Activation-Script` 目录内的指示执行 PowerShell 自动化脚本一键激活。

### 3. Winstep Nexus 桌面美化导入
1. 安装 `05_桌面美化/nexus/NexusSetup.exe`。
2. 打开 Nexus 首选项设置 -> 找到 **备份/恢复** 选项。
3. 导入 `05_桌面美化/wsbackup_2026.08.27_09.52.48.wbk` 预设，即可一键还原图标排布与动效设置。
4. 安装 `Rainmeter-4.5.26.exe`，将 `05_桌面美化/Skins` 内的皮肤放置到系统的 `Documents/Rainmeter/Skins/` 目录下即可启用音频条等效果。

### 4. CAD 与天正电气安装说明
1. 从 Releases 中下载 `AutoCAD_2024` 的分卷文件，保持在同一目录下解压后运行 `Setup.exe`。
2. 安装 `T20V10.0天正电气.zip`。
3. 将 `CAD字体.zip` 解压后的所有 `.shx` 字体文件复制到 AutoCAD 根目录下的 `Fonts` 文件夹内，可彻底解决打开工程图纸时出现的繁体乱码或问号问题。

---

## 📦 大文件存储策略说明 (GitHub Releases)
根据 GitHub 规范，单个仓库中超过 100MB 的二进制文件不推荐直接推入 Git 历史树：
* **核心轻量工具（<= 100MB）**：直接纳入 Git 仓库，重装系统后 `git clone` 即可立即可用。
* **大体积安装包（> 100MB）**：统一归档发布在 [GitHub Releases 页面](https://github.com/Xhwe-x/Installation-package/releases)，单文件分卷保障在 2GB 限制内，永久留档，下载不限速。
