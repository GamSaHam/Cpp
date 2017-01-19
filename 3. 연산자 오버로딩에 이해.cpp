// 연산자 오버로딩에 이해

#include <iostream>

using namespace std;

class Person
{
	int age;
public:
	Person()
	{
		age = 20;
	}

    // 1
	Person operator+(Person& a)
	{
		Person person;
		person.age = this->age + a.age;
		
		return person;

	}

	void printAll()
	{
		cout << age << endl;
	}

};

void main()
{
	Person a;
	Person b;

	// 연산자 오버로딩
	Person c = a + b; // 1연산자 오보로딩 호출

	c.printAll();
}