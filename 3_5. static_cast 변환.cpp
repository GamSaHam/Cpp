// static_cast 변환

#include <iostream>

using namespace std;

class super
{
public:

	virtual void print()
	{
		cout << "super" << endl;
	}
};

class sub : public super
{
public:
	virtual void print()
	{
		cout << "sub" << endl;
	}

};

void main()
{
	// B = A 를 담을 경우는 없지만 담을 경우.
	sub* ss = static_cast<sub*>(new super());
	sub* ss2 = (sub*) new super();
	ss2->print();

	// 사용이유 
	char *cc = (char*) new int(); // 몰지각한 형 변환을 막아 준다.
	//char *cc2 = static_cast<char*>(new int()); error


}

/*
super

*/
