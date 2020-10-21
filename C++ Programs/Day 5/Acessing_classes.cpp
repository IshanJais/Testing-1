#include<iostream>
using namespace std;
class Box
{
public:
	double length;
	double width;
	double height;
};
int main()
{
	Box Box1;
	Box Box2;
	double VolumeB1 = 0.0;
	double VolumeB2 = 0.0;

	Box1.length = 8.0;
	Box1.width = 7.0;
	Box1.height = 6.0;
	Box2.length = 12.0;
	Box2.width = 10.0;
	Box2.height = 15.0;

	VolumeB1 = (Box1.length * Box1.height * Box1.width);
	cout << "Volume of Box 1 is : " << VolumeB1 << endl;

	VolumeB2 = (Box2.length * Box2.height * Box2.width);
	cout << "Volume of Box 2 is : " << VolumeB2 << endl;
	return 0;
}