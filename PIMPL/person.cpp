#include "person.hpp"

class person::impl {
    std::string name_;

public:
    impl(const std::string& name) : name_(name) {}

    std::string name() const {
        return name_;
    }
};

// constructor initializes pointer
person::person(const std::string& name) : pimpl(new impl(name)) {}

// destructor deletes pointer
person::~person() {
    delete pimpl;
}

// getter delegates to implementation object
std::string person::name() const {
    return pimpl->name();
}
