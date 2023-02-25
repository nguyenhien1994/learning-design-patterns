### PIMPLE (or PIMPL) stands for “Pointer to IMPLementation”.
It is a C++ programming technique that hides the implementation details of a class from its object representation by placing them in a separate class, accessed through an opaque pointer1. This technique is used to construct C++ library interfaces with stable ABI and to reduce compile-time dependencies1.

### Advatages of PIMPL pattern

Some of the advantages of using PIMPLE design pattern are:

- Binary compatibility: The binary interface is independent of the private fields. Making changes to the implementation would not break the dependent code.
- Compilation time: Compilation time drops due to the fact that only the implementation file needs to be rebuilt instead of every client recompiling his file.
- Implementation hiding: This hides internal implementation details and data from the user of the library. This can improve security, maintainability and portability.


### Compile and run
```
g++ -std=c++11 person.cpp main.cpp -o main
./main
```

