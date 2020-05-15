#' Hello Go!
#'
#' An example of hello function of Go.
#'
#' @author Shota Ochi
#' @examples 
#' hello()
#' @useDynLib hellogo hello_go
#' @export
hello <- function() {
  .Call(hello_go)
}
