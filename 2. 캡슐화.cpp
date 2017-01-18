// 캡슐화의 이해

#include <iostream>

using namespace std;

class Log
{
public:
	void log();


};

void Log::log()
{
	cout << "log something" << endl;

}

void main()
{
	Log log;

    //캡슐화: log 를 출력하는 용도로만 쓰이지 안에 클래스를 들여다볼 필요가 없다.
	log.log();


}