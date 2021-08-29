# Vectors in C
A lite-weight preprocessor macro only library which replicates `std::vector` with minimum overhead!. Each of the tests can be compiled using 
```
clang -g3 -Wall test/main.c -Iinclude/ && ./a.out
```

# Why use it?
Using inline funcions may dirty the code a bit after the preprocessing stage, but it is worth it! 


Timed output for a `char` input (`st_dyn_timed_tests.c`)
```
Dynamic memory allocation uses this address: 0x562bc1a7e2a0
A dynamic memory allocation which uses linked lists use time   0.00281

Static memory allocation uses this address: 0x7fff01b14630
A static allocation which uses arrays use time   0.00001

Dynamic memory vector allocation uses this address: 0x562bc1a863b0
Dynamic allocation which uses vectors use time   0.00002
```

Timed output for a `int` input (`st_int_timed_tests.c`)
```
A dynamic memory allocation which uses linked lists use time   0.00291

Static memory allocation uses this address: 0x7ffc4306e390
A static allocation which uses arrays use time   0.00001

Dynamic memory vector allocation uses this address: 0x5561c20a23b0
Dynamic allocation which uses vectors use time   0.00003
```
