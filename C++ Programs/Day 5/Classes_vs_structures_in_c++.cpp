#include<iostream>
using namespace std;
struct Player
{
	int i;
	void add()
	{
	}
};
class Player1
{
};

int main()
{
	Player S1;
	Player1 S2;
	std::cout << sizeof(S1);
	std::cout << sizeof(S2);
	std::cin.get();
}