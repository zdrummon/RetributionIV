## Quick Links
- 🏠 [Home](../README.md)
- 📥 **Getting Started** <-- you are here
- 🛠️ [Build Instructions](./BUILD.md)
- 📚 [Design Document](./DESIGN.md)
- 🧠 [To-Do List](./TODO.md)
- 🐞 [Bug Tracker](https://github.com/yourname/retributionIV/issues)
- 🤝 [Contributing](./CONTRIBUTING.md)
- 👥 [Credits](./CREDITS.md)
---

### Instructions, requirements, and configuration:

1. Download and install [Visual Studio 2022 Build Tools](https://visualstudio.microsoft.com/visual-cpp-build-tools)
    - Make sure to select desktop C++
2. Download and install [Git](https://git-scm.com/download/win)
3. Download and install [VS Code](https://code.visualstudio.com)
4. Install **vcpkg** (from terminal):
```powershell
    git clone https://github.com/microsoft/vcpkg.git C:\dev\vcpkg
    cd C:\dev\vcpkg
    .\bootstrap-vcpkg.bat
    .\vcpkg integrate install
```
5. Install VS Code extensions:
    - **C/C++**
    - **CMake Tools**
6. Download the game (from terminal):
```powershell
    git clone https://github.com/yourname/retributionIV.git
    cd retributionIV
```
7. Click **Build** at the bottom left corner of VS Code and select **Visual Studio Community AMD64** at the top
8. Ta-da. You can now run!