#include <iostream>
using namespace std;

int c = 100;

int* func() {//�����д��
	int a = 10;
	return &a;//����ִ�к������
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
	//sum:ȫ�ֱ���,����,�ַ������泣��,��̬�����Ǵ洢��ȫ���ڴ�����.

	//ջ��ע������:��Ҫ���� �ֲ�������ַ
	int* p = func();
	cout << *p << endl;

	int* pa = new int(10);
	cout << *pa << endl;//ָ�뱾���ڶ�ջ��,����ָ�뿪�ٵ�ֵ���ڶ�����
	cout << *p << endl;//��Ȼ��VS2022�п�������,��������δ����Ĵ���,bug�Ͳ�֪����
	delete pa;
	//cout << *pa << endl;�����ʹ��,paָ���ֵ�Ѿ�ɾ����
	test();
}