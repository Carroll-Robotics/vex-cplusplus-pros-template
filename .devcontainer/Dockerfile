# .devcontainer/Dockerfile
# VEX V5  |  PROS CLI 3.5.5  |  GCC‑Arm 13.3.1‑1.1 (xPack)
###############################################################################
# 1. Base image
###############################################################################
FROM ubuntu:22.04

ARG DEBIAN_FRONTEND=noninteractive
ENV TZ=UTC

###############################################################################
# 2. Core packages & Python
###############################################################################
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        ca-certificates curl wget tar xz-utils git build-essential \
        python3 python3-pip python3-venv libusb-1.0-0 && \
    rm -rf /var/lib/apt/lists/*

###############################################################################
# 3. Arm GNU Toolchain 13.3.1‑1.1 (xPack – matches PROS 4.2.x)
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
# 4. PROS CLI 3.5.5 (pip ≥ 23 for --break-system-packages)
###############################################################################
RUN python3 -m pip install --no-cache-dir --upgrade pip && \
    python3 -m pip install --no-cache-dir --break-system-packages pros-cli==3.5.5

###############################################################################
# 5. Quick smoke‑test
###############################################################################
RUN which arm-none-eabi-gcc && arm-none-eabi-gcc --version && \
    pros --version

###############################################################################
# 6. Codespaces convention
###############################################################################
WORKDIR /workspaces/pros-project
CMD ["bash"]
