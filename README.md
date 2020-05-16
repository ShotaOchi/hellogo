# hellogo

[![Build Status](https://travis-ci.org/ShotaOchi/hellogo.svg?branch=master)](https://travis-ci.org/ShotaOchi/hellogo)
[![License: GPL v3](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)

## About
hellogo is an R package to show how to create an R package that calls go gunctions.

## Installation
Run the code shown below.
```
devtools::install_github("ShotaOchi/hellogo", INSTALL_opts = c("--no-multiarch"))
```

## Note
R may become unstable after check or installation of hellogo.

Restarting R stabilizes R.

R often crashes after running the following code on my windows machine.
```
setwd("directory of hellogo")
devtools::document()
devtools::check(args = "--no-multiarch")
devtools::install(args = "--no-multiarch")
```

The following command causes no problem.
```
R CMD build hellogo
R CMD check --no-multiarch hellogo_0.1.0.tar.gz
R CMD INSTALL --no-multiarch hellogo_0.1.0.tar.gz
```
