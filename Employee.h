#include <ostream>
#include <string>

class Employee {
public:
    std::string name;
    std::string position;
    int age;

    Employee() : name(""), position(""), age(0) {}
    Employee(std::string n, std::string p, int a) : name(n), position(p), age(a) {}

    friend std::ostream& operator<<(std::ostream& os, const Employee& employee) {
        os << "Name: " << employee.name
           << ", Position: " << employee.position
           << ", Age: " << employee.age;
        return os;
    }
};
