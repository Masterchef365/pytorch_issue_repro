# Found in https://hub.docker.com/r/pytorch/pytorch/tags
FROM pytorch/pytorch:1.10.0-cuda11.3-cudnn8-devel

# Rustup and rustc dependencies
# wget is for rustup
# build-essential for various packages
# pkg-config, cmake, and libssl-dev are for the test app
RUN apt update && apt install -y ninja-build unzip wget build-essential git pkg-config libssl-dev cmake libpython3.7-dev
