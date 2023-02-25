### Some more benefits of factory method are:

- It allows you to introduce new types of products without breaking existing client code. You can add new subclasses of products and factories without changing existing code.
- It makes your code more testable and maintainable. You can isolate product creation logic in one place and mock it for testing purposes.

### Some drawbacks of factory method are:

- It may introduce unnecessary complexity and overhead if you have a simple product hierarchy or only one type of product. You may end up with a lot of extra classes and interfaces that are not really needed.
- It may make your code less readable and understandable if you use too many factory methods or abstract factories. You may lose track of what kind of objects are actually created and used in your code.

### When to use factory method:

- You don’t know the type or dependencies of the objects you need to create beforehand. You need to defer this decision to runtime based on some input or configuration.
- You want to delegate the creation logic to subclasses that can provide different implementations of products. You can define an interface for creating objects and let subclasses decide which concrete classes to instantiate.
- You want to simplify and centralize the creation logic of complex objects. You can encapsulate all the details of creating products in one place and avoid code duplication.

### Build and run example
```
g++ -std=c++14 main.cpp -o main
./main
```
