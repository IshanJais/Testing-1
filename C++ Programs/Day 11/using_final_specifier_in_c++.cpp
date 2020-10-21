// final specifier is used when we dont want the derived/child class to override the base/parent class 
#include<iostream>
using namespace std;
class Parent {
public:
	virtual void func() final           // here the final specifier is used  
	//virtual void func()               // by not using final keyword child class will be called as usual          
	{
		cout << "I'm the parent class called here" << endl;
	}
};
class Child :public Parent {
	void func()                        // gives an error that cannot override final function of parent class
	{
		cout << "I'm the child class called here" << endl;
	}
};
int main()
{
	Child c;              // here the child class object is created
	Parent &p=c;          // reference is given here
	p.func();             // function has been called
}