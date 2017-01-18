// 깊은 복사와 얕은 복사의 이해

/// 얕은 복사 예
#include <iostream>

using namespace std;

class Person
{
public:
	char* m_name;

public:
	Person(char* _name) 
	{
		m_name = new char[sizeof(_name)+1];
		memcpy(m_name, _name, sizeof(_name) +1);
	}
	~Person()
	{
		delete m_name;
	}

	void printAll()
	{
		cout << this->m_name << endl;
	}

};

void main()
{
	Person person("Sara");
    // 얕은 복사 예
	Person person2 = person; // 생성자가 호출안댐 소멸자는 2번 호출되서 person2의 소멸자가 에러가 발생
	
	person.printAll();
}

///깊은 복사
#include <iostream>

using namespace std;

class Person
{
public:
	char* m_name;

public:
	Person(char* _name)
	{
		m_name = new char[sizeof(_name)+1];
		memcpy(m_name, _name, sizeof(_name) +1);
	}
	~Person()
	{
		if(m_name != nullptr)
			delete[] m_name;
	}

	Person(const Person& person)
	{
		m_name = new char[sizeof(person.m_name) + 1];
		memcpy(m_name, person.m_name, sizeof(person.m_name) + 1);
	}

	void printAll()
	{
		cout << this->m_name << endl;
	}

};

void main()
{
	Person person("Sara");
	Person person2 = person;
	
	person.printAll();
}