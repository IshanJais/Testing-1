#include <iostream>
using namespace std;
int main()
{
	int a;           //here a is lvalue
	double b;        //here b is lvalue

	int& c = a;      //now a is treated as rvalue which is refered to c
	double& d = b;   //now b is treated as rvalue which is refered to d

	a = 5;
	cout << "Value of a : " << a << endl;
	cout << "Value of a reference : " << c << endl;

	b = 11.7;
	cout << "Value of b : " << b << endl;
	cout << "Value of b reference : " << d << endl;

	return 0;
}