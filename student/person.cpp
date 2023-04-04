#include "head.hpp"

Person::Person(string name, unsigned age) : name_(name), age_(age)
{
    cout << "Person" << endl;
}

Person::~Person()
{
    cout << "~Person" << endl;
}

string Person::get_name()
{
    return name_;
}

void Person::set_name(string name)
{
    name_ = name;
}

void Person::birthday()
{
    age_++;
}

unsigned Person::get_age()
{
    return age_;
}

void Person::set_age(unsigned age)
{
    age_ = age;
}