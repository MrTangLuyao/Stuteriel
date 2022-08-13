#include <iostream>
#include <string>
using namespace std;

class student {
public:
	string m_Studentname;
	int m_studentNum;
	void showstudent() {
		cout << "Ñ§ÉúÐÕÃû:" << m_Studentname << "\n±àºÅ:" << m_studentNum << endl;
	}
	void setName(string Name) {
		m_Studentname = Name;
	}
	void setId(int id) {
		m_studentNum = id;
	}
};

int main2() {
	student s1;
	s1.m_Studentname = "Luyao";
	s1.m_studentNum = 1;
	student s2;
	s2.setName("JiRui");
	s2.setId(2);
	s1.showstudent();
	s2.showstudent();
	return 0;
}