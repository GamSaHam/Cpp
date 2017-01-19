// 템플릿에 이해


#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

template <typename T> // 템플릿은 또하나의 함수가 컴파일러에 의해 만들어 진다.
T temAdd(T a, T b)
{
	return a + b;
}

void main()
{
	cout << add(1, 1) << endl;
	cout << add(1.2f, 1.2f) << endl;

	cout << temAdd(1, 1) << endl;
	cout << temAdd(1.2f, 1.2f) << endl; 
}

/*
2
2
2
2.4

*/