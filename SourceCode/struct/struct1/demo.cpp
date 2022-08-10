#include <iostream>
#include <string>
using namespace std;

struct student // struct NAME
{
    string name; // TYPE NAME;
    bool sex;
    int age;
    int score;
};

struct user
{
    string acc;
    string passwd;
} Luyao;

int main()
{
    student JiRui;
    JiRui.age = 16;
    JiRui.name = "JiRuifu";
    JiRui.score = 100;
    JiRui.sex = 0;
    student YuanYuan = {"YuanyuanDong", 1, 16, 100};
    cout << JiRui.name << JiRui.sex << JiRui.age << JiRui.score << endl;
    Luyao.acc = "320680273";
    Luyao.passwd = "123456";
    cout << Luyao.acc << "  " << Luyao.passwd << endl;
}