// Name: �����Z
// Date: 2018/04/16
// Last Update: 2018/04/16
// Problem statement: C++ Homework "0702"
#include "Atoi.h"
int main(void) 
{
	string beTrans;

	while (cin >> beTrans) 
	{
		Atoi atoi(beTrans + "20");
		if (atoi.IsDigital()) 
		{
			cout << atoi.Length() << endl;
			cout << atoi.StringToInteger() << endl;
			cout << sizeof(atoi.StringToInteger()) << endl;
		}

		atoi.SetString(beTrans);
		if (atoi.IsDigital()) 
		{
			cout << atoi.Length() << endl;
			cout << atoi.StringToInteger() << endl;
			cout << sizeof(atoi.StringToInteger()) << endl;
		}
	}

	return 0;
}