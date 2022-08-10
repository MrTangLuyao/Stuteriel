#include <iostream>
#include "struct.hpp"
using namespace std;

void showMenu()
{
    cout << "**************************" << endl
        << "*** 1.新建图书 ************" << endl
        << "*** 2.新建图书借还记录 *****" << endl
        << "*** 3.显示图书记录 ********" << endl
        << "*** 4.删除某个图书 ********" << endl
        << "*** 5.查找某个图书 ********" << endl
        << "*** 6.修改图书信息 ********" << endl
        << "*** 7.!!慎用!!清空全部信息 *" << endl
        << "*** 0.退出图书管理系统 *****" << endl
        << "**************************" << endl;
}

int main()
{
    int select = 99;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 0: // exit
            cout << "系统已经退出，欢迎下次使用" << endl;
            return 0;
            break;
        case 1: // new book
            break;
        case 2: // borrow & lend
            break;
        case 3: // show book record
            break;
        case 4: // delete book
            break;
        case 5: // lookup book
            break;
        case 6: // edit book
            break;
        case 7: // delete all
            break;
        default: // N/A
            break;
        }
    }

    cout << "CODING NOT FINISH" << endl;
}