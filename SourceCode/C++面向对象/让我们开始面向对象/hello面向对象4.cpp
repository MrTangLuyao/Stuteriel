#include <iostream>
#include <string>
using namespace std;

class person {
private://��������Ϊ˽�п������з����дȨ��,����д�����Ƶ�
	string m_name;
	int m_age;
	string m_lover;
public://���������,ҪΪ��Щ˽�г�Ա�ṩ���Ա����ʵ�*���нӿ�*
	void setName(string name) {//�ɶ�
		m_name = name;
	}
	void showName() {//��д
		cout << "����: " << m_name << endl;
	}
	void showAge() {//�ɶ�
		m_age = 0;
		cout << "����: " << m_age << endl;
	}
	void setLover(string lover) {//ֻд
		m_lover = lover;
	}
	void setAge(int age) {
		if (age < 0 || age>150) {
			cout << "��ţ��!����С��0��������>150" << endl;
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