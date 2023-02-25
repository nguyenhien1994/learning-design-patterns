### Benefits of using singleton pattern:
- It guarantees that only one instance of the class will be available throughout the application context.
- It eliminates the unnecessary instantiation overhead, i.e., the extra memory required to create an object.
- It provides controlled access to the sole instance and ensures thread safety when dealing with concurrent access to resources.

### When you might want to use singleton pattern:
- When you need a global point of access to a shared resource, such as a logger, a database connection, or a configuration file.
- When you want to avoid conflicts or inconsistencies between multiple instances of the same class.
- When you want to implement lazy initialization, i.e., creating an object only when it is needed

### Build and run example:
```
g++ -std=c++14 main.cpp -o main
./main
```
