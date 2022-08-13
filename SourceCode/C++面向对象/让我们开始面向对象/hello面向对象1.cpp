//设计一个圆类求出园的周长
#include <iostream>
using namespace std;

const double pi = 3.14;

class circle {
	//访问权限
public:
	//属性
	double R;
	//行为
	double calcC() {
		return 2 * pi * R;
	}
};

int main1() {
	//通过园类创造一个具体的对象:
	circle c1;
	c1.R = 10;
	cout << "园的周长是:" << c1.calcC() << endl;
	return 0;
}