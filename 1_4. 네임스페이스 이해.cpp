// 네임 스페이스 이해
#include <iostream>

using namespace std;

// 네임스페이스 지정
namespace gamSaHam
{
	int val = 10;

}

void main()
{
	// 접근
	cout << gamSaHam::val << endl;

}

// 네임스페이스를 통해서 구문을 확실하게 지정 할 수있다.