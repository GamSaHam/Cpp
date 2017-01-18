#include <iostream>

using namespace std;

void main()
{
    int *pNum = new int;

    *pNum = 10;

    cout<<*pNum<<endl;

    delete pNum;

}