//Day4 homework PartB
//鸡兔同笼(not full) author : Nicktang
#include <iostream>
#define rabit (heads - chicken)
using namespace std;

int main() {
	int chicken = 0;
	int heads;
	int legs;
	cout << "鸡兔同笼计算器\nby Nicktang\n请输入现在有多少个头" << endl;
	cin >> heads;
	cout << " \n 请输入腿子数量\n";
	cin >> legs;
	while (legs<chicken*2+rabit*4) {
		chicken++;
	}
	if (chicken < 0 || rabit < 0) {
		cout << "你这值有问题啊！检查一下啊\n错误原因为:鸡或者兔子的计算值为负数" << endl;
		system("pause");
		return 0;
	}else {
		cout << "结果:\n鸡子有" << chicken << "\n兔子有" << (heads - chicken) << endl;
		system("pause");
		return 0;
	}
	
}