#include <iostream>
#include <string>
using namespace std;

class person {
private://设置类型为私有可以自行分配读写权限,设置写入限制等
	string m_name;
	int m_age;
	string m_lover;
public://这种情况下,要为这些私有成员提供可以被访问的*公有接口*
	void setName(string name) {//可读
		m_name = name;
	}
	void showName() {//可写
		cout << "姓名: " << m_name << endl;
	}
	void showAge() {//可读
		m_age = 0;
		cout << "年龄: " << m_age << endl;
	}
	void setLover(string lover) {//只写
		m_lover = lover;
	}
	void setAge(int age) {
		if (age < 0 || age>150) {
			cout << "你牛逼!年龄小于0或者年龄>150" << endl;
		}
		else
		{
			m_age = age;
		}
	}
};

int main4() {
	person a;
	a.setName("LUYAO");
	a.setLover("FUCKYOU");
	a.setAge(2000);
	a.showName();
	a.showAge();
	return 0;
}