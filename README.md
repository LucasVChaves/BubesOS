# BubesOS

## Note: This project was discontinued, you can fiddle around as you wish  

## What is it

-> A personal project that aims to develop a Operational System from scratch.  
-> Bootloader, kernel and OS all made in x86 Assembly and C.  
-> I don't want to build a ultra complex desktop OS, this is just a personal project for learning purposes.  

## How to build

-> You will need a text editor (I use [vscode](https://code.visualstudio.com)), [Docker](https://www.docker.com) and [Qemu](https://www.qemu.org/download/) in your system.  

-> Download the files or clone the repository.  
-> Create a docker image with `docker build buildenv -t bubesos-buildenv`.  
-> Run the image with `docker run --rm -it -v %cd%:/root/env bubesos-buildenv` on cmd, `docker run --rm -it -v "${pwd}:/root/env" bubesos-buildenv` on powershell or `docker run --rm -it -v "$(PWD)":/root/envex bubesos-buildenv` on bash.  
-> If you're using `WSL`, `msys2` or `git bash` use the bash command.   
-> Make it with makefile: `make build-x86_64` inside the docker container.
-> Close it with the `exit` command.  
-> Run with Qemu: `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`.  
-> Make sure you have Qemu [added to your path](https://dev.to/whaleshark271/using-qemu-on-windows-10-home-edition-4062#:~:text=2.-,Add%20Qemu%20path%20to%20environment%20variables%20settings,-Copy%20the%20Qemu).  

-> Note: Every time you make a change to `kernel.iso`, close the Qemu VM before compiling, otherwise errors may appear.  

*If you have any problems with the building and emulating procedure read [this](https://github.com/davidcallanan/os-series/blob/master/README.md) from the original dev.*

## Devlog | TODOs

-> Currently it only starts and shows a startup message in the screen.  
-> I plan to add bash-like commands, sound, networking, and basic tools like a shell, calculator, vim-like text editor, simple games (maybe chess or tetris idk), etc.  
-> The project is kinda dead right now, but I plan to maintain it on the future.  
-> The imediate feature is to fix the keyboard support.  
 : *So, basically when I use the shift for uppercase it just locks and I can't get to lowercase again, and capslock just prints a smile and an S for some shitty & unkown reason.*  
-> Next thing is to add a basic shell.
