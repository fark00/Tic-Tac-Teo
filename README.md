# Tic Tac Toe Game

### in this program i implemented tic tac toe game.

## Requirement

### Windows
* Visual Studio 2019

### Linux
**I have used ***windows.h*** and ***conio.h*** in this program and both of these libraries are not compatible with the Linux API.**

**Follow these steps to be able to run this program on Linux:**

* Install Wine
* sudo apt-get install g++-mingw-w64 (for minGW)
* Then copy libgcc_s_sjlj-1.dll (To the project Dir) in my case: ***cp /usr/lib/gcc/i686-w64-mingw32/9.3-win32/libgcc_s_sjlj-1.dll ~/Documents/'cpp codes'***
* Then copy libstdc++-6.dll (To the project Dir)in my case: ***cp /usr/lib/gcc/i686-w64-mingw32/9.3-win32/libstdc++-6.dll ~/Documents/'cpp codes'***
* Download w32api zip from te web site then unzip it in the working Dir, im my case: ***w32api-3.17-2-mingw32-dev.tar.lzma***
* ex : /usr/bin/i686-w64-mingw32-g++ -I w32api/include/ -L w32api/lib/ Tic-Tac-Teo.cpp (create a.exe)
* **Enjoy!**

## Example:
<img src="https://github.com/fark00/Tic-Tac-Toe/blob/master/exe.gif">

## Support

**Contact me @:**

e-mail:

* farzanehkoohestani2000@gmail.com

Telegram id:

* [@farzaneh_koohestani](https://t.me/farzaneh_koohestani)

