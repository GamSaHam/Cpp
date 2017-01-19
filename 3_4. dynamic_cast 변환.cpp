// dynamic_cast 이해

#include <iostream>

using namespace std;

class A
{
public:
	virtual void Put(void) { cout << "A" << endl; }

};

class B:public A
{
public:
	void Put(void) { cout << "B" << endl; }


};

void main()
{

	A* a = new B;
	B* b = nullptr;

	//b = a; error

	// dynamic_cast
	b = dynamic_cast<B*>(a); // 자동으로 형 변환이 되어진다. A클래스는 virtual 키워드가 있어야한다.

	b->Put();


}