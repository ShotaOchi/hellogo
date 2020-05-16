package main

// #include <stdlib.h>
import "C"

//export hello_from_go
func hello_from_go() *C.char {
  out_go := "Hello!"
  return C.CString(out_go)
}

func main() {}
