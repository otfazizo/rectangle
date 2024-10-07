/*
Project name: Rectangle
Author: Suraw
Date: 7, October 2024.
*/

#include<iostream>
using namespace std;

class Rectangle
{
	public: 
	  double length;
	  double width;
	  
    public:
    	double getArea();
    	double getPerimeter();
    	void display();
};

double Rectangle::getArea()
{
	return length * width;
}
double Rectangle::getPerimeter()
{
	return 2*(length + width);
}
void Rectangle::display()
{
	cout<<"The area of the rectangle is:"<<getArea()<<endl;
	cout<<"The perimeter of the rectangle is:"<<getPerimeter()<<endl;
}
int main()
{
	Rectangle rect1 , rect2;
	
	rect1.length = 6;
	rect1.width = 4;
	
	rect2.length = 8;
	rect2.width = 4;
	
	cout<<"Rectangle 1:"<<endl;
	rect1.display();
	
	cout<<endl;
	
	cout<<"Rectangle 2:"<<endl;
	rect2.display();
}
