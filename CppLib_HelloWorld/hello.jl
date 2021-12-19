
# this doesn't work.  Likely, because the cpp code is not pure C
ccall((:hello, "./libhello.so"), String, ())