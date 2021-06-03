FROM randomdude/gcc-cross-x86_64-elf

RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install -y nasm
RUN apt-get install -y xorriso
RUN apt-get install -y grub-pc-bin
RUN apt-get install -y grub-common

VOLUME /root/env
WORKDIR /root/env

# build -> docker build buildenv -t bubesos-buildenv
# cmd -> docker run --rm -it -v %cd%:/root/env bubesos-buildenv
# bash -> docker run --rm -it -v "$(PWD)":/root/envex bubesos-buildenv
# make -> make build-x86_64
# emulate -> qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso