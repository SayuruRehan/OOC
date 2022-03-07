#include <iostream>
#include <iomanip>
using namespace std;

//create structures
struct circle
{
	float radius;
};

struct rectangle
{
	float length;
	float width;
};

struct square
{
	float length;
};

//declaring functions
float areaofCircle(circle c);
float areaofRectangle(rectangle r);
float areaofSquare(square s);

int main()
{
	//declaring the struct variables
	struct circle c1;
	struct rectangle r1;	//small rectangle
	struct rectangle r2;	//big rectangle (yard)
	struct square s1;
	
	float Area_Circle, Area_Yard, Area_Rectangle, Area_Square, GreenArea;
	
	//circle
	cout <<"Enter Radius: ";
	cin >> c1.radius;
	
	//rectangle
	cout <<"Enter length for the Rectangle: ";
	cin >> r1.length;
	
	cout <<"Enter width of the Rectangle: ";
	cin >> r1.width;
	
	//yard
	cout <<"Enter length for the Yard: ";
	cin >> r2.length;
	
	cout <<"Enter width of the Yard: ";
	cin >> r2.width;
	
	//square
	cout <<"Enter length of the Square: ";
	cin >> s1.length; 
	
	//calling functions
	Area_Circle = areaofCircle(c1);
	Area_Rectangle = areaofRectangle(r1);	//small rectangle
	Area_Yard = areaofRectangle(r2);	//Yard
	Area_Square = areaofSquare(s1);
	
	GreenArea = Area_Yard - (Area_Circle + Area_Rectangle + Area_Square);
	
	cout << "Area of Green part: " << setiosflags(ios::fixed) << setprecision(3) << GreenArea << endl; 
}

//function implementation
float areaofCircle(circle c)
{
	return (22 / 7.0) * c.radius * c.radius;
}

float areaofRectangle(rectangle r)
{
	return r.length* r.width;
}

float areaofSquare(square s)
{
	return s.length * s.length;
}

