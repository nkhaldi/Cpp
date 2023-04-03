#include "head.hpp"

Student::Student(string name, int age)
{
    name_ = name;
    age_ = age;
}

Student::~Student()
{
}

void Student::set_exam(string exam, int mark)
{
    exams_[exam] = mark;
}
int Student::get_exam(string exam)
{
    return exams_[exam];
}

exam_map Student::get_all_exams()
{
    return exams_;
}