#include <iostream>
#include <string>
using namespace std;

struct teacher
{
    string studentName;
    int age;
    char sex;
};

void PrintTeacher(teacher t)
{
    cout << t.studentName << " " << t.age << " " << t.sex << endl;
}

int main()
{
    teacher Jirui;
    Jirui.age = 16;
    Jirui.sex = 'm';
    Jirui.studentName = "Yuxuan";
    PrintTeacher(Jirui);
    teacher *p = &Jirui;
    cout << p->age << endl;
}