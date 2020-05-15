package main

import "C"

//export hello_from_go
func hello_from_go() string {
  out := "Hello!\000"
  return out
}

func main() {}
