/*#include<iostream>
int main()
{
	int a = 65;                            //by not providing ascii values in this it will genrate garbage values 
	void* ptr = &a;
	char* ptr1 = (char*)&a;                //this will hold only the character values depending on 'a'
 	std::cout << *ptr1 << std::endl;       //this will give the value of 'a'
	std::cout << *(ptr1 - 1) << std::endl; //this decreases the initial position of pointer 
	std::cout << *(ptr1 + 1) << std::endl; //this increases the initial position of pointer
	std::cout << *(ptr1) << std::endl;     //this will also gives the value of 'a'
	return 0;
}*/

//-------------------------------------------------------------------------------------------------------------------------------------------------

/*#include<iostream>
void foo(int i)
{
	std::cout << "foo int";
	std::cout << i;
}
void foo(char* ptr)
{
	std::cout << "foo ptr";
	std::cout << ptr;
}
int main()
{
	foo(NULL);            //this will call "foo(int i)" & in c++ NULL hold 0
	
	char* ptr = nullptr;  //function is redefined with nullptr and then ready to be called
	foo(nullptr);
	
	return 0;
}*/