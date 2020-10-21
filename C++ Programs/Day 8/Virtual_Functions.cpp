#include <iostream>
using namespace std;
class Parent {                                   // here the base class Parent is created
public:
	virtual void print()                         // virtual base function is created  
	{
		cout << "print the parent class" << endl;
	}
	void show()									 // second base function is created
	{
		cout << "show the parent class" << endl;
	}
};
class Child:public Parent {						// here is the derived class Child is created
public:
	virtual void print()						// here is the virtual derived class is created
	{
		cout << "print the child class" << endl;
	}
	void show()									// here is the second derived class is created
	{
		cout << "show the child class" << endl;
	}
};

int main()
{
	Parent* pptr;
	Child c;
	pptr = &c;

	pptr->print();								// here is the virtual derived function will be called at runtime
	pptr->show();								// here second base class will be called at runtime
}