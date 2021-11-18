//файл program.cpp
#include "stdafx.h"
#include <iostream>
#include "funcs.h"

using namespace std;
int main()
{
	char prog_close = n;
	while prog_close == n;
	short int n = 0;
	cin >> int a >> int b;
	{
		cout << "Select the operation number";
		cout << "1 - Plus";
		cout << "2 - Minus";
		cout << "3 - Multiply";
		cout << "4 - Division";
		switch(n)
		{
			case 1
			{
				cout << MySum(a, b);
			}
			case 2
			{
				cout << MySub(a, b);
			}
			case 3
			{
				cout << MyMul(a, b);
			}
			case 4
			{
				cout << MyDiv(a, b);
			}
		}	
		cout << "Close the program? n/y";
		cin >> prog_close;
	}
	system("pause");
	return 0;
}