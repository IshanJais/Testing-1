#include<iostream>
using namespace std;
class Parent {
protected:
	int i;
public:
	Parent(int a) { i = a; }
	virtual void display()
	{
		cout << "I am the parent class, i= " << i << endl;
	}
};
class Child : public Parent {
	int j;
public:
	Child(int a, int b) : Parent(a) { j = b; }
	virtual void display()
	{
		cout << "i am the child class, i=" << i << "j= " << j << endl;
	}
};
void somefunc(Parent obj)
{
	obj.display();
}

int main()
{
	Parent b(200);
	Child d(50, 100);
	somefunc(b);
	somefunc(d);
	return 0;
}