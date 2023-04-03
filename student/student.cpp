#include "head.hpp"

int Student::total = 0;

Student::Student(string name, int age) : Person(name, age)
{
    doc_id_ = ++total;
}

Student::~Student()
{
    cout << "~Student" << endl;
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