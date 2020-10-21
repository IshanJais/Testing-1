#include<iostream>
using namespace std;
constexpr int productoftwonumber(int x, int y)  // here constexpr is used to evaluate the function at compile time 
{
	return (x*y);
 }
int main()
{
	const int a = productoftwonumber(10, 30);
	cout << "the product is" << a << endl;
}