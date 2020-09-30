#include<iostream>
using namespace std;
class Box {
public:
	double getVolume(void) {                    // to store the volume, member fuction is made
		return length * width * height;
	}
	void setLength(double len) {                // to set the length of every box length function is made here
		length = len;
	}
	void setWidth(double wid) {					// to set the width of every box width function is made here
		width = wid;
	}
	void setHeight(double hei) {				// to set the height of every box height function is made here
		height = hei;
	}

	Box operator+(const Box& b)                 // HERE THE OPERATOR OVERLOAD IS USED TO ADD TWO OBJECTS IN THIS FORMAT 
	{
		Box box;
		box.length = this->length + b.length;
		box.width = this->width + b.width;
		box.height = this->height + b.height;
		return box;
	}

private:
	double length;
	double width;
	double height;
};

int main()
{
	Box Box1;             // 
	Box Box2;             // 
	Box Box3;             //
	double V;
	Box3 = Box1 + Box2;   // here this is used to combine and calculate the volume for third box  
	Box1.setLength(9.0);  // from here value is being set
	Box1.setWidth(2.0);
	Box1.setHeight(3);
	Box2.setLength(6);
	Box2.setWidth(5);
	Box2.setHeight(15);

	V = Box1.getVolume();                       // to get the volume of Box1
	cout << "Volume of Box1 is: " << V << endl;
	V = Box2.getVolume();                       // to get the volume of Box2
	cout << "Volume of Box2 is: " << V << endl;
	V = Box3.getVolume();                       // to get the volume of Box3
	cout << "Volume of Box3 is: " << V << endl;
	return 0;
}