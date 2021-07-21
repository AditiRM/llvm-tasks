# LLVM-TASKS!

## Write a LLVM pass that computes an approximated version of the arithmetic intensity of a given function using its LLVM representation. 

#### Assumptions :
+ Only add, sub, mul and div operations are considered as the arithmetic operations.
+ Only Loads and Stores are memory access operations accessing a single byte.
+ The function does not contain loops.

#### LLVM pass should determine :
+ (A) the total number of arithmetic operations
+ (B) the total number of memory access operations 
+ (C) compute A/B for each function.

#### Bonus Implementation :
Extend the above solution to consider functions with a single loop (trivial loop with known loop bounds).
