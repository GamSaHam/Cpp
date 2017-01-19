#include <iostream>

using namespace std;

void main()
{
	int a, b;

	try
	{
		cout << "A/B"<<endl;

		cout << "input number A:";
		cin >> a;
		
		cout << "input number B:";
		cin >> b;

		if (b == 0) throw b;

		cout << a / b;
	}
	catch (int exception)
	{
		cout << "b should not be zero"<<endl;
	}
}