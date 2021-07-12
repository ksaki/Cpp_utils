# Check R behavior of copy
library(lobstr)
library(Rcpp)
sourceCpp("ref_modify.cpp")

# Deep copy will occur when the values of the object is modified
x <- c(1,2,3)
y <- x
cat("address of x and y identical before modifying by R",
    obj_addr(x) == obj_addr(y), "\n")
# TRUE
x[1] <- 10
cat("address of x and y identical after modifying by R",
    obj_addr(x) == obj_addr(y), "\n")
# FALSE

# But, it will not occur when the values of the object is modified 
# by Rcpp through refrence
n <- c(1,2,3)
m <- n
cat("address of n and m identical before modifying by Rcpp",
    obj_addr(n) == obj_addr(m), "\n")
# TRUE
ref_modify(n)
cat("address of n and m identical after modifying by Rcpp ",
    obj_addr(n) == obj_addr(m), "\n")
# TRUE


