#include <iostream>
using namespace std;
//����Ȩ��
//����Ȩ�� public		���ڿ��Է��� ������Է���    �����������Է���
//����Ȩ�� protected ���ڿ��Է��� ���ⲻ���Է���  �����������Է���
//˽��Ȩ�� private   ���ڿ��Է��� ���ⲻ���Է���  ��������಻���Է���
class per {
public:
	string name;
protected:
	string car;
	string acc;
private:
	string passwd;
public:
	void func(string a, string b, string c) {
		name = a;
		car = b;
		passwd = c;
	}
	void showPerson() {
		cout << name << endl
			<< car << endl
			<< passwd << endl;
	}
};

class c1
{
	int a;
};

struct c2 {
	int a;
};

int main3() {
	per p1;
	p1.name = "lisi";
	cout << "p1" << p1.name << endl;
	p1.func("Lisi", "moto", "23456");//ɧ�������ǿ��Է��ʵ�
	p1.showPerson();
	c1 cl;
	c2 st;
	//cl.a = 123;//����,classĬ��˽��(private)
	st.a = 234;//��ȷ,structĬ�Ϲ���(public)
	return 0;
}