#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "head.hpp"

class Student
{
private:
    int age_;
    string name_;
    exam_map exams_;

public:
    Student(string name, int age);
    ~Student();

    void set_exam(string exam, char mark);
    char get_exam(string exam);
    exam_map get_all_exams();
};

#endif