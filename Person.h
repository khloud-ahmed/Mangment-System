#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {}
    virtual ~Person() = default;

    string getName() const {
        return name;
    }
    void setName(string n) {
        name = n;
    }
};

#endif
