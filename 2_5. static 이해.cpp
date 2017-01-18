// static의 이해



// static 이해
#include <iostream>

using namespace std;

class Boss
{
	//static
	static int m_count; //전역적으로 돌린다. c++에서는 전역이라는 개념이 없다. static 으로 전역 개념을 돌림.

public:
	Boss()
	{
		m_count++;
	}

	void printAll()
	{
		cout << m_count << endl;
	}

};

int Boss::m_count = 0;

void main()
{
	Boss boss_a;
	Boss boss_b;

	boss_b.printAll();
}