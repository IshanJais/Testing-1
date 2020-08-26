//narrowing happens when we store the value of a variable of differnt datatype than another one
#include<iostream>
int main()
{
	double val = 21.9;
	int val2 = 1005;
	int x2 = val;
	char c2 = val2;//here narrowing will occur
	int x3{ val };
	char c3{ val2 };//here narrowing will occur
	std::cout << "value of x2 is: " << x2;
	std::cout << "value of c2 is: " << c2;
	std::cout << "value of x3 is: " << x3;
	std::cout << "value of c2 is: " << c3;
	return 0;
}