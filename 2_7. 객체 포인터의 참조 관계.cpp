#include <iostream>

using namespace std;

class A
{
    
public:
	A()
	{

	}
};

class B: public A
{

};

void main()
{
    // 객체 포인터 참조 관계

    // B>A
	B* b = new A(); //error 이유는 A라는 공간에  B에 담을수 없다.
    A* a = new B(); // success 이유는 B라는 큰 공간에 a를 담을수 있다. 



}

