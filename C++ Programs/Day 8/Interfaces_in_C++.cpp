#include <iostream>
using namespace std;
class Parent {
	int x = 10;
public:
	virtual void func() = 0;          // this is the pure virtual function declared by 0
		int getx()
	{
		//return x;
		cout << "The value of x is" << x << endl;
	}
};
class Child :public Parent {
	int y;
public:
	void func()
	{
		cout << "func() is called" << endl;
	}
};

int main()
{
	Child c;
	c.func();
	return 0;
}