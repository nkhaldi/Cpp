#include "head.hpp"

int main()
{
    Student *me = new Student("Narek", 24);

    me->set_exam("math", 4);
    me->set_exam("informatics", 5);
    me->set_exam("literature", 5);
    me->set_exam("chemestry", 3);

    cout << "Solo getter" << endl;
    cout << "  Math: " << me->get_exam("math") << endl;
    cout << "  Informatics: " << me->get_exam("informatics") << endl;
    cout << endl;

    cout << "Full getter" << endl;
    exam_map all_exams = me->get_all_exams();
    for (auto it : all_exams)
    {
        cout << "  " << it.first << ": " << (short)it.second << endl;
    }

    return 0;
}