// Constructor delegation process is used to connect the two function to each other into a constructor
#include<iostream>
using namespace std;
class A {
	int a, b, c;
public:
	A()
	{
		a = 0;
		b = 0;
		c = 0;                          // initial value will be same for all the members in it i.e. 0
	}
	A(int c) : A()                      // here is the construtor delegation used to establish relation between function and constructor
	{
		this->c=c;                     // here this pointer is used to finally allocate the roaming value to c=10
	}
	void show()                        // this is created to show all the values in it
	{
		cout << "the value of a is " << a << endl;
		cout << "the value of b is " << b << endl;
		cout << "the value of c is " << c << endl;
	}
};
int main()
{
	A obj(10);       // object is created from here the value will be assingned to A() but doesn't know to whom it will be alloted
	obj.show();      // command to call the show function at last level i.e. on runtime
	return 0;
}