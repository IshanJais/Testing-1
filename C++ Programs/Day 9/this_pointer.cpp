#include<iostream>
using namespace std;
class Test{
private:
	int x;                       // Here the 'x' is different i.e. primary 
public:
	void setx(int x)             // Here the x is different i.e. secondary
	{                            // lvalue is primary and rvalue is secondary
		this->x = x;             /* Here 'this' keyword is usede to differntiate between both the 'x'
									by using this keyword the compiler doesn't gets confuse between both of them*/			
	}
	void print()
	{
		cout << "x= " << x << endl;
	}
};

int main()
{
	Test obj;
	int x = 10;                 // the value of x is assigned to secondary one, primary will not hold the value
	obj.setx(x);                // here value is being set
	obj.print();                // order to print the value of 'x'
}