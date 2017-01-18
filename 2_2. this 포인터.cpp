// this 포인터의 이해

#include <iostream>

using namespace std;

class Physic
{
	int m_x;
public:
	
	void setX(int _x);


};

void Physic::setX(int _x)
{
	// this 포인터
	this->m_x = _x; //현재 인스턴스에 m_x를 말한다. 
}

void main()
{
	Physic p;

	p.setX(10);
}