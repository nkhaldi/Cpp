#ifndef PERSON_HPP
#define PERSON_HPP

#include "head.hpp"

class Person
{
protected:
    int age_;
    string name_;

public:
    Person(string name, int age);
    virtual ~Person();
};

#endif