#include <iostream>
using namespace std;

int c = 100;

int* func() {//错误的写法
	int a = 10;
	return &a;//函数执行后会清理
}

void test() {
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = 100 + i;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[]arr;
	return;
}

int main() {
	//int a = 1;
	//int b = 2;
	//static int d = 5;
	//const int e = 10;
	//cout << (int)&a << " " << (int)&b << endl;
	//cout << (int)&c << endl;
	//cout << (int)&d << endl;
	//cout << (int)&"HELLO" << endl;
	//cout << (int)&e << endl;
	//sum:全局变量,常量,字符串字面常量,静态变量是存储在全局内存区的.

	//栈区注意事项:不要返回 局部变量地址
	int* p = func();
	cout << *p << endl;

	int* pa = new int(10);
	cout << *pa << endl;//指针本身在堆栈区,但是指针开辟的值是在堆区的
	cout << *p << endl;//虽然在VS2022中可以运行,但是这是未定义的错误,bug就不知道了
	delete pa;
	//cout << *pa << endl;错误的使用,pa指向的值已经删除了
	test();
}