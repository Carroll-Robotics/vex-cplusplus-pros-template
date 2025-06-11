# 📦 VEX V5 PROS C++ Codespace Template

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

Template maintained by `Carroll Robotics`.

Questions? Open an [issue](https://github.com/<your-org>/<repo>/issues) or email `<web-master@carroll-robotics.com>`.
