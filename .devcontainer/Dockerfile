# .devcontainer/Dockerfile
# VEX V5  |  PROS CLI 3.5.5  |  GCC‑Arm 13.3.1‑1.1 (xPack)
###############################################################################
# 1. Base image
###############################################################################
FROM ubuntu:22.04

ARG DEBIAN_FRONTEND=noninteractive
ENV TZ=UTC

###############################################################################
# 2. Core packages, locales & Python
###############################################################################
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        ca-certificates curl wget tar xz-utils git build-essential \
        python3 python3-pip python3-venv libusb-1.0-0 \
        locales && \
    sed -i 's/^# *en_US.UTF-8 UTF-8/en_US.UTF-8 UTF-8/' /etc/locale.gen && \
    locale-gen && \
    update-locale LANG=en_US.UTF-8 && \
    rm -rf /var/lib/apt/lists/*

ENV LANG=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8

###############################################################################
# 3. Arm GNU Toolchain 13.3.1‑1.1 (xPack – matches PROS 4.2.x)
###############################################################################
ARG GCC_V=13.3.1-1.1
ARG GCC_URL=https://github.com/xpack-dev-tools/arm-none-eabi-gcc-xpack/releases/download/v${GCC_V}/xpack-arm-none-eabi-gcc-${GCC_V}-linux-x64.tar.gz
RUN mkdir -p /opt/toolchains && \
    curl -fsSL ${GCC_URL} -o /tmp/gcc.tar.gz && \
    tar -xzf /tmp/gcc.tar.gz -C /opt/toolchains && \
    rm /tmp/gcc.tar.gz

ENV GCC_HOME=/opt/toolchains/xpack-arm-none-eabi-gcc-${GCC_V}
ENV PATH=${GCC_HOME}/bin:${PATH}

###############################################################################
# 4. VS Code PROS helpers (IntelliSense compiler & vexcom stub)
###############################################################################
ENV VSCODE_PROS_ROOT=/root/.vscode-remote/data/User/globalStorage/sigbots.pros/install

RUN mkdir -p ${VSCODE_PROS_ROOT}/pros-toolchain-linux/bin && \
    ln -s ${GCC_HOME}/bin/arm-none-eabi-g++ \
          ${VSCODE_PROS_ROOT}/pros-toolchain-linux/bin/arm-none-eabi-g++ && \
    \
    # --- create stub vexcom INSIDE extension dir ---
    mkdir -p ${VSCODE_PROS_ROOT}/vexcom-linux && \
    printf '#!/usr/bin/env bash\n'                                                 \
           'if command -v vexcom-real >/dev/null 2>&1; then\n'                     \
           '  exec vexcom-real \"$@\"\n'                                           \
           'fi\n'                                                                  \
           'if [ -x \"$HOME/.local/bin/vexcom\" ] && [ \"$HOME/.local/bin/vexcom\" != \"$0\" ]; then\n' \
           '  exec \"$HOME/.local/bin/vexcom\" \"$@\"\n'                           \
           'fi\n'                                                                  \
           'echo \"vexcom version 0.0.0 (stub for Codespaces)\";\n'                \
           'exit 0\n' > ${VSCODE_PROS_ROOT}/vexcom-linux/vexcom && \
    chmod +x ${VSCODE_PROS_ROOT}/vexcom-linux/vexcom && \
    \
    # --- put wrapper on PATH so the extension finds it ---
    ln -sf ${VSCODE_PROS_ROOT}/vexcom-linux/vexcom /usr/local/bin/vexcom

###############################################################################
# 5. PROS CLI 3.5.5
###############################################################################
RUN python3 -m pip install --no-cache-dir --upgrade pip && \
    python3 -m pip install --no-cache-dir --break-system-packages pros-cli==3.5.5

###############################################################################
# 6. Smoke‑test
###############################################################################
RUN which arm-none-eabi-gcc && arm-none-eabi-gcc --version && \
    pros --version && \
    vexcom --version

###############################################################################
# 7. Codespaces convention
###############################################################################
WORKDIR /workspaces/pros-project
CMD ["bash"]
