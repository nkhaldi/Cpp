#include "head.hpp"

int main()
{
    Student me("Narek", 24);

    me.set_exam("math", 4);
    me.set_exam("informatics", 5);
    me.set_exam("literature", 5);
    me.set_exam("chemestry", 3);

    cout << "Solo getter" << endl;
    cout << "  math: " << me.get_exam("math") << endl;
    cout << "  informatics: " << me.get_exam("informatics") << endl;
    cout << endl;

    cout << "Full getter" << endl;
    exam_map all_exams = me.get_all_exams();
    for (auto it : all_exams)
    {
        cout << "  " << it.first << ": " << it.second << endl;
    }

    return 0;
}