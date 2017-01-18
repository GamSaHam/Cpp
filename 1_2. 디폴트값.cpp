// 디폴트 값 

#include <iostream>

using namespace std;

void foo(int val = 10) // 디폴트 값
{
	cout << "val value  is " <<val<< endl;
}


void main()
{
    
	foo();  // 인자값을 전달을 안해 주었으므로 10이 된다.
	foo(1); // 인자값을 전달을 해주었으므로 1이 된다.

    // 모호성이 없음
}

/*
val value is 10
val value is 1

*/