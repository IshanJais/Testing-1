//Enum (Enumerators) type is used to hold set of integer values specified by the user.
#include<iostream>
enum Example           //enum class is created here
{
	A,B,C              //these are the enumerators    
};

int a = 0;
int b = 1;
int c = 3;

int main()
{
	Example value = 5; //here is the error value can only hold the enumerators A,B,C
	if (value == b)
	{
		//hello
	}
	std::cin.get();
}