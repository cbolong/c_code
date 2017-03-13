FROM debian:stable

RUN apt-get update
RUN apt-get update && apt-get --no-install-recommends install -y \
    git \
    wget \
    build-essential \
    lib32z1 \
    lib32ncurses5 \
    lib32stdc++6 \
    ca-certificates \
    pkg-config \
    android-tools-adb \
    vim
    
WORKDIR /
