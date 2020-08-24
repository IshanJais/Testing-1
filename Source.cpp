#include<iostream>
using namespace std;
int main()
{
	int number1;
	int number2;
	int result;

	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	
	result = number1 + number2;
	cout << "The sum of both number is: " << result;
	return 0;
}