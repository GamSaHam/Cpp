// friend 의 이해

/// friend 함수
#include <iostream>

using namespace std;

class Foo
{
private:
	void privateFunction()
	{
		cout << "call the privateFunction" << endl;
	}

public:
	void publicFunction()
	{
		cout << "call the publicFunction" << endl;
	}

	// friend 함수
	friend void friendFunction(); // 내부 private 까지 접근 가능한 함수 지정
};

void friendFunction()
{
	Foo foo;

	foo.privateFunction();
	foo.publicFunction();
}

void main()
{
	friendFunction();
}
///


/// friend 클래스
#include <iostream>

using namespace std;

class Goo
{
private:
	void privateGooFunction()
	{
		cout << "call the goo" << endl;
	}

	friend class Foo;
};

class Foo
{
	Goo goo;
public:
	void printFooFunction()
	{
		goo.privateGooFunction();
		
		cout << "call the publicFunction" << endl;
	}
};


void main()
{
	Foo foo;
	foo.printFooFunction();

}

///