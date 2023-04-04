#ifndef PERSON_HPP
#define PERSON_HPP

#include "head.hpp"

class Person
{
protected:
    unsigned age_;
    string name_;

public:
    Person(string name, unsigned age);
    virtual ~Person();

    string get_name();
    void set_name(string name);

    void birthday();
    unsigned get_age();
    void set_age(unsigned age);
};

#endif