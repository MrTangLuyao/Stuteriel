#include <iostream>
using namespace std;

int func1(int a, int b = 10, int c = 10) {//����Ĭ�ϲ���,ע��:�������߶��������ֻ����һ������Ĭ�ϲ���
	return a + b + c;
}

void func2(int) {//����վλ����,Ŀǰû����,�Ժ�����
	cout << "HELLO,WORLD!!" << endl;
}

void funcf() {//��������,Ҫ����:1ͬһ������2 ������ͬ3�β����Ͳ�ͬor����or˳��ͬ(��֮����Ҫ��ͬ)
	cout << "funcf����1" << endl;
}

void funcf(int a) {//��������,Ҫ����:1ͬһ������2 ������ͬ3�β����Ͳ�ͬor����or˳��ͬ(��֮����Ҫ��ͬ)
	cout << "funcf����2" << endl;
}//����ֻ�Ƿ���ֵ��������Ļ��ǲ��ܹ��ɺ������ص�������!!!!!!

//void funcf(const int b) {//����ΪconstҲ��Ҳ���Ե�,���ʵ��int���������,const int ���������
//	cout << "funcf����3" << endl;
//}//����ֻ�Ƿ���ֵ��������Ļ��ǲ��ܹ��ɺ������ص�������!!!!!!

int main()
{
	cout << func1(1) << endl;
	void(123);
	funcf();
	funcf(123);
	const int c = 10;
	funcf(c);
}