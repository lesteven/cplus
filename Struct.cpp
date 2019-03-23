#include <iostream>

typedef struct {
    std::string name;
    int age;
    void hello() {
        std::cout << name << " " << age << "\n";
    }
} Person;

int main() {
    Person steven; 
    steven.name = "Steven";
    steven.age = 100;
    steven.hello();
    
    Person arr[3] = {
        "foo", 20,
        "bar", 50,
        "baz", 24,
    };
    for (Person each: arr) {
        each.hello();
    }
    Person arr2[3] = {
        {"afoo", 120},
        {"vbar", 350},
        {"zbaz", 254},
    };
    for (Person each: arr2) {
        each.hello();
    }
    Person esteban = { "Esteban", 50 };
    esteban.hello();
}
