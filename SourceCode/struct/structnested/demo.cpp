#include <iostream>
using namespace std;

struct stu
{
    double grade;
    int age;
};

struct tea
{
    stu student;
    int age;
};

void PrintStu(stu s)
{
    cout << "\nage=" << s.age << "\ngrade=" << s.grade << endl;
}

void PrintTea(tea t)
{
    cout << "\nteacher's age=" << t.age;
    PrintStu(t.student);
}

int main()
{
    tea Tang;
    Tang.age = 16;
    Tang.student.age = 16;
    Tang.student.grade = 100;
    stu Fu = {99, 16};
    PrintTea(Tang);
    PrintStu(Fu);
    tea *p = &Tang;
    p->age = 15;
    p->student.age = 99;
    p->student.grade = 59;
    PrintTea(Tang);
}