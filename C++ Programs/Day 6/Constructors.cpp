//constructors are used to make an object a real working object
#include<iostream>
using namespace std;
class Car {
public:
	int a, b;
	Car()   //name of the constructors has to be same as name of object made
	{
		a = 50;
		b = 60;
	}
};
int main()
{
	Car c1;  //here object is created
	//constructors are called after the object is formed 
	cout << "A:" << c1.a << endl;
	cout << "B:" << c1.b;
	return 0;
}