#include <iostream>

using namespace std;

// 인라인 함수
inline int add(int _a, int _b) // 특징 #define은 C에서 사용되던 형식이고, inline define과 다르게 컴파일 하면서 실행
// 된다.
{
	return _a + _b;
}

void main()
{
	printf("%d\n",add(1,2));

}