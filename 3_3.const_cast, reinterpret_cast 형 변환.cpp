// 변환 연산자 const_cast,

#include <iostream>

using namespace std;

void main()
{
    //const_cast
	int a =100;
	const int* t = &a; // 포인터의 *t값을 변경을 못시킨다.
	int* tt = const_cast<int *>(t); // 컨케스트로 풀어준다.
	*tt = 1000;    // 잘 동작

	cout << *tt << endl;
	cout << a << endl;

    // reinterpret_cast 
    int a;
	int * b;
	a = reinterpret_cast<int>(&b); // 포인터 주소값을 정수로 변환하는 작업

	cout << a << endl;



}