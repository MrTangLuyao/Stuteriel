#include <iostream>
using namespace std;

class cube {
private:
	int m_L;
	int m_H;
	int m_W;
public:
	void setCube(int l, int w, int h) {
		if (l <= 0 && w <= 0 && h <= 0) {
			cout << "³¤¿í¸ß<=0,ÉèÖÃÊ§°Ü" << endl;
		}
		else
		{
			m_H = h;
			m_L = l;
			m_W = w;
		}
	}
	int calcS() {
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	int calcV() {
		return m_H * m_L * m_W;
	}
	int getL() {
		return m_L;
	}
	int getW() {
		return m_W;
	}
	int getH() {
		return m_H;
	}
	bool isSameInClass(cube& c) {
		if (m_L == c.getL() && m_H == c.getH() && m_W == c.getW()) {
			return 1;
		}
		else
		{
			return 0;
		}
	}
};

bool isSame(cube& c1, cube& c2) {
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW()) {
		return 1;
	}
	else
	{
		return 0;
	}
}

int main() {
	cube c1;
	c1.setCube(10, 10, 10);
	cout << c1.calcS() << c1.calcV() << endl;
}