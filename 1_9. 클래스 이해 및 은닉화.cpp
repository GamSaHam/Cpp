// 정보 은닉에 이해

#include <iostream>
#include <string> // string

using namespace std;

//클래스
class StudentData
{
public: // public 키워드 외부에서 접근 가능 , private 을 통해서 은닉화
	int age;
	string name;

	void printAll();
};

void StudentData::printAll()
{
	cout << age << endl;
	cout << name << endl;
}

void main()
{
	StudentData student_data;
	student_data.age = 10;
	student_data.name = "Jeff Bernat";

	student_data.printAll();

}