1. Open the file c:\rtools40\etc\pacman.conf in a text editor and uncomment the following 2 lines at the very end of the file
```
## 3rd party msys2 packages (rtools hackers only!)
[msys]
Include = /etc/pacman.d/mirrorlist.msys
```

2. pacman -Syuu and then close terminal window if terminal window is freezed.

3. pacman -Syuu.

4. pacman -S mingw-w64-{x86_64,i686}-go

5. set three environment variables: PATH, GOPATH, and GOROOT. An example is shown below.
```
PATH=C:\rtools40\mingw64\bin:$PATH
GOPATH=%USERPROFILE%\go
GOROOT=C:\rtools40\mingw64\lib\go
```

Note that enabling the upstream msys2 repository and installing extra utilities may alter the rtools40 behavior.

See [https://github.com/r-windows/rtools-packages](https://github.com/r-windows/rtools-packages) for more information.

It is convenient to use an installer downloaded from [https://golang.org/dl/](https://golang.org/dl/).
