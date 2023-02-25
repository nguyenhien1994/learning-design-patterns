#pragma once

#include <string>

class person {
public:
    person(const std::string& name);
    ~person();
    std::string name() const;

private:
    class impl; // forward declaration for implementation class
    impl* pimpl; // pointer to implementation object

};
