#include <iostream>
using namespace std;

int main() {
	char inputStr[1000];
	for (int i = 0; i <= 999; i++) {
		cin >> inputStr[i];
		if (inputStr[i] == 48) {
			break;
		}
	}
	//改小写
	for (int i = 0; i <= 999; i++) {
		switch (inputStr[i])
		{
		case '0':
			goto end;
			break;
		case 'A':
			cout << 'a';
			break;
		case 'B':
			cout << 'b';
			break;
		case 'C':
			cout << 'c';
			break;
		case 'D':
			cout << 'd';
			break;
		case 'E':
			cout << 'e';
			break;
		case 'F':
			cout << 'f';
			break;
		case 'G':
			cout << 'g';
			break;
		case 'H':
			cout << 'h';
			break;
		case 'I':
			cout << 'i';
			break;
		case 'J':
			cout << 'j';
			break;
		case 'k':
			cout << 'k';
			break;
		case 'L':
			cout << 'l';
			break;
		case 'M':
			cout << 'm';
			break;
		case 'N':
			cout << 'n';
			break;
		case 'O':
			cout << 'o';
			break;
		case 'P':
			cout << 'p';
			break;
		case 'Q':
			cout << 'q';
			break;
		case 'R':
			cout << 'r';
			break;
		case 'S':
			cout << 's';
			break;
		case 'T':
			cout << 't';
			break;
		case 'U':
			cout << 'u';
			break;
		case 'V':
			cout << 'v';
			break;
		case 'W':
			cout << 'w';
			break;
		case 'X':
			cout << 'x';
			break;
		case 'Y':
			cout << 'y';
			break;
		case 'Z':
			cout << 'z';
			break;
		default:
			cout << inputStr[i];
			break;
		}
	}
	end:
	cout << endl;
    system("pause");
    return 0;
}