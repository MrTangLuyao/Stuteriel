//Day4 homework PartB
//����ͬ��(not full) author : Nicktang
#include <iostream>
#define rabit (heads - chicken)
using namespace std;

int main() {
	int chicken = 0;
	int heads;
	int legs;
	cout << "����ͬ��������\nby Nicktang\n�����������ж��ٸ�ͷ" << endl;
	cin >> heads;
	cout << " \n ��������������\n";
	cin >> legs;
	while (legs<chicken*2+rabit*4) {
		chicken++;
	}
	if (chicken < 0 || rabit < 0) {
		cout << "����ֵ�����Ⱑ�����һ�°�\n����ԭ��Ϊ:���������ӵļ���ֵΪ����" << endl;
		system("pause");
		return 0;
	}else {
		cout << "���:\n������" << chicken << "\n������" << (heads - chicken) << endl;
		system("pause");
		return 0;
	}
	
}