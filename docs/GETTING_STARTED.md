## Quick Links
- 🏠 [Home](../README.md)
- 📥 **Getting Started** <-- you are here
- 🤝 [Contribution Guide](./CONTRIBUTING.md)
- 📚 [Design Document](./DESIGN.md)
- 🧠 [To-Do List](./TODO.md)
- 🐞 [Bug Tracker](https://github.com/yourname/retributionIV/issues)
- 👥 [Credits](./CREDITS.md)
---

### Instructions, requirements, and configuration:

1. Download and install:
    - [Visual Studio 2022 Build Tools](https://visualstudio.microsoft.com/visual-cpp-build-tools) (select **Desktop C++**)
    - [Git](https://git-scm.com/download/win)
    - [VS Code](https://code.visualstudio.com)
2. Install **vcpkg** (from terminal):
```powershell
    git clone https://github.com/microsoft/vcpkg.git C:\dev\vcpkg
    cd C:\dev\vcpkg
    .\bootstrap-vcpkg.bat
    .\vcpkg integrate install
```
3. Install VS Code extensions:
    - **C/C++**
    - **CMake Tools**
4. Clone the project (from terminal):
```powershell
    git clone https://github.com/yourname/retributionIV.git
    cd retributionIV
```
5. Builld & Run 
    - Click **Build** at the bottom left corner of VS Code
    - Select **Visual Studio Community AMD64** at the top
    - Ta-da! You can now run the project.