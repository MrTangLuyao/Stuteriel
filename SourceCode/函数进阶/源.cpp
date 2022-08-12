#include <iostream>
using namespace std;

int func1(int a, int b = 10, int c = 10) {//函数默认参数,注意:声明或者定义中最多只能有一个存在默认参数
	return a + b + c;
}

void func2(int) {//函数站位常数,目前没有用,以后有用
	cout << "HELLO,WORLD!!" << endl;
}

void funcf() {//函数重载,要满足:1同一作用域2 名称相同3形参类型不同or个数or顺序不同(总之就是要不同)
	cout << "funcf调用1" << endl;
}

void funcf(int a) {//函数重载,要满足:1同一作用域2 名称相同3形参类型不同or个数or顺序不同(总之就是要不同)
	cout << "funcf调用2" << endl;
}//仅仅只是返回值类型区别的话是不能构成函数重载的条件的!!!!!!

//void funcf(const int b) {//更改为const也是也可以的,这个实参int就是上面的,const int 就是上面的
//	cout << "funcf调用3" << endl;
//}//仅仅只是返回值类型区别的话是不能构成函数重载的条件的!!!!!!

int main()
{
	cout << func1(1) << endl;
	void(123);
	funcf();
	funcf(123);
	const int c = 10;
	funcf(c);
}