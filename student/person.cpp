#include "head.hpp"

Person::Person(string name, int age) : name_(name), age_(age) {}

Person::~Person() {
    cout << "~Person" << endl;
}