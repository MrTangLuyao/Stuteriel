#include <iostream>
#include "struct.hpp"
using namespace std;

void showMenu()
{
    cout << "**************************" << endl
        << "*** 1.�½�ͼ�� ************" << endl
        << "*** 2.�½�ͼ��軹��¼ *****" << endl
        << "*** 3.��ʾͼ���¼ ********" << endl
        << "*** 4.ɾ��ĳ��ͼ�� ********" << endl
        << "*** 5.����ĳ��ͼ�� ********" << endl
        << "*** 6.�޸�ͼ����Ϣ ********" << endl
        << "*** 7.!!����!!���ȫ����Ϣ *" << endl
        << "*** 0.�˳�ͼ�����ϵͳ *****" << endl
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
            cout << "ϵͳ�Ѿ��˳�����ӭ�´�ʹ��" << endl;
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