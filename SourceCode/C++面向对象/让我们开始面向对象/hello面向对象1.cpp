//���һ��Բ�����԰���ܳ�
#include <iostream>
using namespace std;

const double pi = 3.14;

class circle {
	//����Ȩ��
public:
	//����
	double R;
	//��Ϊ
	double calcC() {
		return 2 * pi * R;
	}
};

int main1() {
	//ͨ��԰�ഴ��һ������Ķ���:
	circle c1;
	c1.R = 10;
	cout << "԰���ܳ���:" << c1.calcC() << endl;
	return 0;
}