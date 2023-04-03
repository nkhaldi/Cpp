#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "head.hpp"

typedef unordered_map<string, int> exam_map;

class Student
{
private:
    int age_;
    string name_;
    exam_map exams_;

public:
    Student(string name, int age);
    ~Student();

    void set_exam(string exam, int mark);
    int get_exam(string exam);
    exam_map get_all_exams();
};

#endif