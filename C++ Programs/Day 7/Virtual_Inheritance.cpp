#include <iostream>
using namespace std;
class First {                    // Here is the virtual base class created
public:
	int a = 10;
};
class Second : virtual public First {   // virtual class is created

};
class Third : virtual public First {    // virtual class is created

};
class Fourth : public Second, public Third {  // Here both the virtual classes are combined together

};
int main()
{
	Fourth D;         // object has been created here 
	cout << "The value of a is: " <<D.a<< endl;
	return 0;
}