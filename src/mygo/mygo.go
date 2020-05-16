package main


import "C"

//export hello_from_go
func hello_from_go() *C.char {
  out_go := "Hello!"
  out := C.CString(out_go)
  return out
}

func main() {}
