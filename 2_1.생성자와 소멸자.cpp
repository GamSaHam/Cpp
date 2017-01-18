// 생성자와 소멸자 이해
#include <iostream>

using namespace std;

class Object
{
public:
	Object();
	~Object();
};

Object::Object()
{
	cout << "Object의 생성자" << endl;
}

Object::~Object()
{
	cout << "Object의 소멸자" << endl;
}

void main()
{
	{ 
		Object object; // 생성자 호출
	} // 소멸자 호출

	cout << "end" << endl;
}


// 생성자: 생성시에 초기화
// 소멸자: 소멸할 경우 풀어줘야 할께 생기는 경우 ex) delete,.. 