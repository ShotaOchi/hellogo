#include <R.h>
#include <Rinternals.h>

#include "libmygo/libmygo.h"

// Actual Wrappers
SEXP hello_go() {
  char* tmp = hello_from_go();
  SEXP out = PROTECT(allocVector(STRSXP, 1));
  SET_STRING_ELT(out, 0, mkChar(tmp));
  free(tmp);
  UNPROTECT(1);
  return out;
}

static const R_CallMethodDef CallEntries[] = {
  {"hello_go", (DL_FUNC) &hello_go, 0},
  {NULL, NULL, 0}
};

void R_init_hellogo(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
