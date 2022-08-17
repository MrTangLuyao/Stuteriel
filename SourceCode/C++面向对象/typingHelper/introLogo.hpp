#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

void logo() {
	for (int i = 1; i <= 15; i++) {
		Sleep(10);
		system("cls");
		for (int j = 1; j <= i; j++) {
			cout << endl;
		}
		cout << "NICK PRESENTS" << endl;
	}
	Sleep(2500);
	system("cls");
}

void printWord(string a) {
	int len = sizeof(a) / sizeof(char);
	for (int index = 0; index < len; index++) {
		cout << a[index];
		Sleep(5);
	}
	cout << endl;
}