#include <iostream>
using namespace std;
//访问权限
//公共权限 public		类内可以访问 类外可以访问    父类的子类可以访问
//保护权限 protected 类内可以访问 类外不可以访问  父类的子类可以访问
//私有权限 private   类内可以访问 类外不可以访问  父类的子类不可以访问
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
	p1.func("Lisi", "moto", "23456");//骚方法还是可以访问的
	p1.showPerson();
	c1 cl;
	c2 st;
	//cl.a = 123;//错误,class默认私有(private)
	st.a = 234;//正确,struct默认共有(public)
	return 0;
}