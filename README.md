# hellogo

[![Build Status](https://travis-ci.org/ShotaOchi/hellogo.svg?branch=master)](https://travis-ci.org/ShotaOchi/hellogo)
[![License: GPL v3](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)

## About
hellogo is an R package to show how to create an R package that calls go functions.

## Installation
Run the code shown below.
```
devtools::install_github("ShotaOchi/hellogo", INSTALL_opts = c("--no-multiarch"))
```

## Note (April 21th, 2022)
I encounter a segfault error when I repeat devtools::check and devtools::install.

I don't encounter the crush desrcribed below now.

## Note (May 28th, 2020)
R may become unstable after check or installation of hellogo.

Restarting R stabilizes R.

R often crashes after running the following code on my windows machine.
```
setwd("directory of hellogo")
devtools::document()
devtools::check(args = "--no-multiarch")
devtools::install(args = "--no-multiarch")
```
The error message on my windows machine is shown below.
> fatal error: runtime: unexpected waitm - semaphore out of sync
runtime stack:
runtime.throw(0x6750ecf4, 0x31)
        C:/rtools40/mingw64/lib/go/src/runtime/panic.go:1116 +0x79
runtime.notetsleep_internal(0x6756db78, 0xdf8475800, 0xc000030480, 0x183e98c0b5fa4, 0x0)
        C:/rtools40/mingw64/lib/go/src/runtime/lock_sema.go:264 +0x255
runtime.notetsleep(0x6756db78, 0xdf8475800, 0x370)
        C:/rtools40/mingw64/lib/go/src/runtime/lock_sema.go:275 +0x66
runtime.sysmon()
        C:/rtools40/mingw64/lib/go/src/runtime/proc.go:4492 +0x44b
runtime.mstart1()
        C:/rtools40/mingw64/lib/go/src/runtime/proc.go:1097 +0xd1
runtime.mstart()
        C:/rtools40/mingw64/lib/go/src/runtime/proc.go:1062 +0x6d

The following command causes no problem.
```
R CMD build hellogo
R CMD check --no-multiarch hellogo_0.1.0.tar.gz
R CMD INSTALL --no-multiarch hellogo_0.1.0.tar.gz
```
