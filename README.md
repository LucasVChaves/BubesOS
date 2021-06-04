# BubesOS

## What is it

-> A personal project that aims to develop a Operational System from scratch.  
-> Bootloader, kernel and OS all made in x86 Assembly and C.  
-> I don't want to build a ultra complex desktop OS, this is just a personal project for learning purposes.  

## How to build

-> Download the files or clone the repository.  
-> Create a docker image with `docker build buildenv -t bubesos-buildenv`.  
-> Run the image with `docker run --rm -it -v %cd%:/root/env bubesos-buildenv` on cmd or `docker run --rm -it -v "$(PWD)":/root/envex bubesos-buildenv` on bash.  
-> Make it with makefile: `make build-x86_64`.  
-> Run with [QEMU](https://www.qemu.org/download/): `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`.  

## Devlog | TODOs

-> Currently it only starts and shows a startup message in the screen.  
-> I plan to add bash-like commands, sound, networking, and basic tools like a shell, calculator, vim-like text editor, simple games (maybe chess or tetris idk), etc.  
-> The project is kinda dead right now, but I plan to maintain it on the future.  
-> The imediate feature to add is keyboard support and a basic shell.  
