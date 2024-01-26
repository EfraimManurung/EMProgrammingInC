#include <iostream>
#include <string>

struct person {
    int age;
    std::string name;
};

int main() {
    person p1, p2;
    person *pptr = &p1;

    p1.age = 24;
    p1.name = "Efraim";

    (*pptr).age = 25;
    pptr->age = 26;

    std::cout << p1.name << " is " << p1.age << " years old." << std::endl;

}