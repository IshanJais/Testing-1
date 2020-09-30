// override keyword is used to check if there are any changes in base or derived class; by using this, user will not get the expected result 
#include<iostream>
using namespace std;
class Parent {
public:
	virtual void func()
	{
		cout << "Here Parent class will called" << endl;
	}
};
class Child {
public:
	//void func(int a)                                     // by just writing this will compile the program succesfully 
	void func(int a) override          // but after attaching override keyword with this function it doesnt override the parent class member 
	{
		cout << "Here Child class will be called" << endl;
	}
};

int main()
{
	Parent p;
	Child c;
	cout << "Here Main will be called" << endl;
}