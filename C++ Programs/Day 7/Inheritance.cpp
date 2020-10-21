// Inheritance is used to simplify the object and to make the parent and child like relationship
#include<iostream>
using namespace std;

class Shape {               // Base Shape class is creted here, under this many 2d shapes will take part.
public:
	void setLength(int l)
	{
		Length = l;
	}
	void setBreadth(int b)
	{
		Breadth = b;
	}
	void setRadius(float r)
	{
		Radius = r;
	}

protected:
	int Length;
	int Breadth;
	float Radius;
};

class Rectangle : public Shape {   // first child class is created having properties of base class
public:
	int getArea()
	{
		return(Length * Breadth);
	}
};
class Triangle : public Shape {   // Second child class is created having properties of base class
public:
	int getArea()
	{
		return(0.5*Length * Breadth);
	}
};
class Square : public Shape {    //Third child class is created having properties of base class
public:
	int getArea()
	{
		return(Length * Length);
	}
};
class Circle : public Shape {   // Fourth child class is created having properties of base class
public:
	int getArea()
	{
		return(3.14 * Radius * Radius);
	}
};

int main()
{
	// Here the values will be provided to different classes
	Rectangle Rect;
	Rect.setLength(10);
	Rect.setBreadth(20);
	Triangle Tri;
	Tri.setLength(10);
	Tri.setBreadth(5);
	Square Sq;
	Sq.setLength(8);
	Circle Cir;
	Cir.setRadius(3.60);

	cout << "total area of Rectangle is: " << Rect.getArea() << endl;
	cout << "total area of Triangle is: " << Tri.getArea() << endl;
	cout << "total area of Square is: " << Sq.getArea() << endl;
	cout << "total area of Circle is: " << Cir.getArea() << endl;

	return 0;
}