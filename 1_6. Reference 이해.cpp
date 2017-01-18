// Reference 이해

#include <iostream>

using namespace std;

void main()
{
	int val = 10; 

    //레퍼런스
	int &rVal = val; // val 이랑 rVal이랑 이제 메모리도 같고 똑같은 상태가 된다.  ctrl+alt+m 1~4번키 누르면 메모리창 뜬다.

	cout << rVal << endl;

}