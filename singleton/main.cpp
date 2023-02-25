#include <iostream>

class Singleton {
private:
    // private constructor
    Singleton();

public:
    // static member
    static Singleton* instance;

    // static method
    static Singleton* getInstance();

    // Some methods
    void doWork();
};

Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
    std::cout << "Constructor called\n";
}

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }

    return instance;
}

void Singleton::doWork() {
    std::cout << "Do some work here.\n";
}

int main() {
    auto s1 = Singleton::getInstance();
    s1->doWork();

    auto s2 = Singleton::getInstance();
    s2->doWork();

    return 0;
}
