#include<iostream>
int x;
int main()
{
	int x;
	x = 1;
	std::cout << "first " << x<<'\n';
	{
		int x;
		x = 2;
		std::cout << "second " << x<<'\n';
	}
	x = 3;
	std::cout << "third " << x<<'\n';
}