#include <iostream>
#include <conio.h>
#include "introLogo.hpp"
using namespace std;

void showMenu() {
	cout << "MENU:" << endl;
	cout << "press s to start \n"
		<< "press a to save\n"
		<< "press l to load\n"
		<< "press c to clear\n"
		<< "press e to exit\n"
		<< endl;
}

int main() {
	logo();
backmenu:
	system("cls");
	showMenu();

	char menui = _getch();
	switch (menui)
	{
	case 's':
		printWord("����һ��:����һ����Ϸ�Ŀ��?��Ҫ����ʾ��������̵���������ֵĽ���\n���ﻻ���˰�!");
		break;
	case 'e': {
		printWord("�����Ҫ�˳�ô?press Y to Yes/ N to No");
		char isExit = _getch();
		if (isExit == 'y' || isExit == 'Y') {
			printWord("�õ���Ϸ�Ѿ��˳���");
		}
		else
		{
			goto backmenu;
		}
	}

	default:
		break;
	}
}