#include<iostream>//the  header file enclosed in <> will search for the specific directory
#include "function.h"; //the header file enclosed in "" will search in whole system
#include "function1.h"; //again declaring same header will cause error beacause previously it has been already declared and holds all the characterstics of previous header.
int main()
{
	func();
	return 0;

}
void func()
{
	sum(50, 100);
	std::cout << sum << '\n';
}