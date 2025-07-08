# 📦 VEX V5 PROS C++ Template## 🚀 Quick Start

### Prerequisites

1. **Install PROS CLI** - Follow the [offiial installation guide](https://pros.cs.purdue.edu/v5/getting-started/)
2. **Install VS Code** (optional but recommended)
3. **Clone or fork** this repository

### Getting Started

1. **Clone** this repo to your local machine:
   ```bash
   git clone <your-repo-url>
   cd <repo-name>
   ```

2. **Build the project**:
   ```bash
   pros build
   ```

3. **Flash to robot** (connect V5 brain via USB):
   ```bash
   pros upload
   ```

4. **Open in VS Code** for development:
   ```bash
   code .
   ```emplate for coding VEX V5 robots in C++ with PROS.

This template includes:

- **PROS project structure** with EZ-Template integration
- **Pre-configured build system** (Makefile)
- **GitHub Actions workflow** for automated builds
- **Recommended VS Code extensions**:  
  - [PROS Extension](https://marketplace.visualstudio.com/items?itemName=sigbots.pros)  
  - [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)

> 💡 Requires local PROS CLI installation for development and flashing.ROS C++ Codespace Template

A zero‑install starter repo for coding VEX V5 robots in C++ with PROS inside GitHub Codespaces.

The container ships with:

- **PROS CLI 3.5.5 + Kernel 4.2.x**
- **Arm GNU Toolchain 13.3** (matches the kernel)
- **Pre‑installed VS Code extensions**:  
  - [PROS Extension](https://marketplace.visualstudio.com/items?itemName=sigbots.pros)  
  - [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)

> 💡 No local software required—just a browser and a GitHub account.

---

## 🚀 Quick Start (≈ 60 seconds)

1. **Fork** this repo to your GitHub account.  
2. Click **Code → Codespaces → Create codespace on main**.  
   A browser‑based VS Code window opens; the container builds in ~2 minutes.
3. In the terminal run:

   ```bash
   pros build                # compile
   pros simulate --open      # optional: open the built‑in sim
   ```

4. Edit files in `src/` and `include/` — autocomplete & linting are ready.

---

## 📁 Project Layout

| Path / File              | Purpose                             |
|--------------------------|-------------------------------------|
| `src/main.cpp`           | Main program entry point           |
| `src/autons.cpp`         | Autonomous routines                 |
| `src/globals.cpp`        | Global variables and device setup  |
| `src/helpers.cpp`        | Helper functions                    |
| `include/`               | Header files                        |
| `bin/` & `build/`        | Auto‑generated artifacts (safe to delete) |

_Built with EZ-Template for advanced chassis control._

---

## 💻 Local Development Setup

### Installing PROS CLI

1. **Install Python 3.6+** (if not already installed)
2. **Install PROS CLI**:
   ```bash
   pip install pros-cli
   ```
3. **Install toolchain** (automatically handled by PROS CLI on first use)

### VS Code Setup (Recommended)

1. **Install VS Code**
2. **Install extensions**:
   - [PROS Extension](https://marketplace.visualstudio.com/items?itemName=sigbots.pros)
   - [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack)

### Alternative IDEs

PROS projects work with any C++ IDE. The key files are:
- `Makefile` - Build configuration
- `project.pros` - PROS project metadata
- `include/` and `src/` - Source code

---

## 💻 Basic Git Workflow

| Action         | How                                                                 |
|----------------|----------------------------------------------------------------------|
| Create branch  | Source Control → … → Create Branch or `git checkout -b feature/my-idea` |
| Commit         | Stage changes → ✓ Commit in Source Control sidebar                  |
| Push           | Click **Sync Changes** or `git push -u origin HEAD`                |
| Open PR        | GitHub → **Compare & pull request**                                 |
| Review & merge | Reviewer comments → fix → Merge                                     |

> 🛑 Tip: Merge only PRs that compile (`pros build` passes) to keep robots healthy.

---

## 🔌 Flashing Code to a V5 Brain

| Method               | Steps                                                                                                                                                 | When to use                              |
|----------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------|
| Micro‑SD card        | `pros build` → copy `bin/hot.package.bin` to SD card (rename to `program.bin`) → Load via Brain menu                                                 | When USB connection isn't available     |
| Direct USB flash    | Connect V5 brain → `pros upload`                                                                                                                      | Standard development workflow            |
| Competition upload   | Build locally → transfer binary to competition field → flash via field control                                                                        | During competitions                      |

> ⚠️ Codespaces can’t access local USB ports—choose one of the options above.

---

## 🔧 Handy Commands

| Task                        | Command                                         |
|----------------------------|--------------------------------------------------|
| Build project              | `pros build`                                     |
| Clean artifacts            | `pros make clean`                                |
| Flash to robot             | `pros upload`                                    |
| Open serial terminal       | `pros terminal`                                  |
| Create new project         | `pros conduct new . --skeleton adv --no-prompt` |
| Run simulator              | `pros simulate`                                  |

---

## 📚 Further Learning

- [PROS API Docs](https://pros.cs.purdue.edu/v5/)
- [C++ Primer YouTube Playlist](https://www.youtube.com/playlist?list=PL1V7wcf2xJZ2xVSaF4mUErZr2TMT6Q4O2) – great if you’re new to the language
- [VEX Forum](https://www.vexforum.com/) – ask questions, share code, get feedback

---

## ✨ Contributing

**Fork → Branch → Commit → Pull Request.**

Ensure:

- ✅ `pros build` passes  
- 🎯 Code is formatted (e.g., `clang-format`)  

Docs & examples are welcome — feel free to improve this README!

---

## 👨‍💻 Maintainers

Template maintained by `<your‑name or organisation>`.

Questions? Open an [issue](https://github.com/<your-org>/<repo>/issues) or email `<contact@your-org.com>`.

---

## 🔄 Why Use Pull Requests?

Pull Requests (PRs) are how we:

- ✅ Propose changes for review before they’re merged into the main codebase  
- 🔍 Collaborate by leaving comments, suggestions, and approvals  
- 🧪 Ensure code compiles and runs correctly before going live  
- 🧼 Keep the `main` branch clean and working for everyone  

Even if you’re the only developer, PRs help track changes and spot mistakes early.

---

## 📥 How to Make a Pull Request (Step-by-Step)

1. **Create a new branch** for your changes:

   ```bash
   git checkout -b feature/my-cool-change
   ```

2. **Make your changes** in VS Code or your preferred editor.

3. **Stage and commit** your changes:

   ```bash
   git add .
   git commit -m "Describe what you changed"
   ```

4. **Push** your branch to GitHub:

   ```bash
   git push -u origin feature/my-cool-change
   ```

5. **Open a Pull Request**:

   - Go to the repo on GitHub  
   - Click **Compare & pull request**  
   - Add a title and description  
   - Click **Create pull request**

6. **Wait for review or test it yourself**, then **merge** it when ready.

---

## 🧠 Best Practices for PRs

- 📋 Keep PRs small and focused on one thing  
- ✍️ Use clear commit messages and PR titles  
- 🔍 Review your own code before asking others  
- ✅ Only merge if `pros build` passes
