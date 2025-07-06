# 📦 VEX V5 PROS C++ Template with EZ-Template

This template includes [EZ-Template](https://ez-robotics.github.io/EZ-Template/) for easier autonomous and drive programming in VEX V5 PROS C++ projects.

---

## 🚀 Quick Start (Local, No Container)

1. **Install PROS CLI and Toolchain**
   - [PROS Getting Started Guide](https://pros.cs.purdue.edu/v5/getting-started/index.html)
   - Or, in your terminal:
     ```bash
     pip3 install pros-cli
     pros conduct env install
     ```
2. **Clone this repository**
   ```bash
   git clone <your-repo-url>
   cd <your-repo-folder>
   ```
3. **Build the project**
   ```bash
   make
   ```
4. **Flash to your V5 Brain**
   - Use `pros upload bin/hot.package.elf` (USB) or copy `bin/hot.package.bin` to SD card as `program.bin`.

---

## 🤖 EZ-Template

- Official docs: [https://ez-robotics.github.io/EZ-Template/](https://ez-robotics.github.io/EZ-Template/)
- Example drive and autonomous code is already included in `src/main.cpp`.
- Configure your drive and IMU ports in the drive constructor at the top of `main.cpp`.
- For advanced features (tracking wheels, auton selector, etc.), see the [EZ-Template tutorials](https://ez-robotics.github.io/EZ-Template/tutorials/).

---

## 📁 Project Layout

| Path / File              | Purpose                             |
|--------------------------|-------------------------------------|
| `src/initialize.cpp`     | Runs once at boot/reset             |
| `src/autonomous.cpp`     | Autonomous period routine           |
| `src/opcontrol.cpp`      | Driver‑control loop                 |
| `include/config.hpp`     | All ports & global devices declared here |
| `build/` & `bin/`        | Auto‑generated artifacts (safe to delete) |

_Skeleton generated with `pros conduct new --skeleton adv`._

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
| Micro‑SD card        | `pros build` → right-click `bin/hot.package.bin` → Download → copy to SD (rename to `program.bin`) → Load via Brain menu                              | Any computer—even Chromebooks             |
| Local flash-only CLI | Install PROS CLI + VEXcom locally → clone repo → `pros upload bin/hot.package.elf`                                                                   | You have USB & can install Python         |
| Teacher workstation / CI | GitHub Action builds & stores `program.bin`; mentor PC downloads & flashes                                                           | Centralized flashing station              |

> ⚠️ Codespaces can’t access local USB ports—choose one of the options above.

---

## 🔧 Handy Commands

| Task                        | Command                                         |
|----------------------------|--------------------------------------------------|
| Build project              | `pros build`                                     |
| Clean artifacts            | `pros make clean`                                |
| Run simulator              | `pros simulate --open`                           |
| Generate new skeleton      | `pros conduct new . --skeleton adv --no-prompt`  |
| Flash via USB (local)      | `pros upload bin/hot.package.elf`                |
| Runtime logs               | `pros terminal`                                  |

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
