#include<iostream>
using namespace std;

class AREA
{
	public:
		
	void area_of_circle(float r)
	{
		cout<<"Area of Circle: "<<3.14*r*r<<endl;
	}
	void area_of_triangle(float h,float b)
	{
		cout<<"Area of Triangle: "<<0.5*h*b<<endl;
	}
	void area_of_square(float side)
	{
		cout<<"Area of Square: "<<side*side<<endl;
	}
	void area_of_rectangle(float l,float b)
	{
		cout<<"Area of Rectangle: "<<l*b<<endl;
	}
};

int main()
{
	AREA a;
	a.area_of_circle(3);
	a.area_of_triangle(3,4);
	a.area_of_square(5);
	a.area_of_rectangle(2,6);
	return 0;
}
