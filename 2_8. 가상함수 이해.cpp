// 1. 가상함수의 이해

/// 가상함수 없을 경우
#include <iostream>

using namespace std;

class A
{
public :
	void printAll()
	{
		cout << "Call the A" << endl;
	}
};

class B:public A
{
public:
	void printAll()
	{
		cout << "Call the B" << endl;
	}
};

void main()
{
	A* a = new A();
	A* b = new B();

	a->printAll();
	b->printAll(); // 하지만 이넘은 Call the B를 부르고 싶다.
}

/*
Call the A
Call the A
*/

/// 

/// 가상함수 추가할 경우
#include <iostream>

using namespace std;

class A
{
public :
	virtual void printAll()
	{
		cout << "Call the A" << endl;
	}
};

class B:public A
{
public:
	void printAll()
	{
		cout << "Call the B" << endl;
	}
};

void main()
{
	A* a = new A();
	A* b = new B();

	a->printAll();
	b->printAll(); // 하지만 이넘은 Call the B를 부르고 싶다.
}

/*
Call the A
Call the B
*/

/// 

// 순수 가상함수란
// 1. 순수가상함수 선언시  virtual void printAll() = 0; 초기화
// 2. 자식 클래스는 반드시 순수가상함수 선언한 내용을 구현해야 한다.  
