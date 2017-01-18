// 함수 오버로딩

#include <iostream>

using namespace std;

void foo()
{
	cout << "foo" << endl;
}

void foo(int val)
{
	cout << "foo2" << endl;
}

void main()
{
    //함수 오버로딩
	foo();  // 컴파일러가 알아서 함수 foo로 간다.
	foo(1); // 컴파일러가 알아서 함수 foo(int)로 간다. 

    // 모호성이 없음
}