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
		printWord("奥多利王国与沙伐王国原本是一个王国名叫:");
		break;
	case 'e': {
		printWord("你真的要退出么?press Y to Yes/ N to No");
		char isExit = _getch();
		if (isExit == 'y' || isExit == 'Y') {
			printWord("好的游戏已经退出啦");
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