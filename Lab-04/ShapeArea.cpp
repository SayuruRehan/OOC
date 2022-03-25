//#include <iostream>
#include "ShapeArea.h"
using namespace std;

//implementation
float areaofCircle(Circle c)
{
  return (22.0 / 7) * c.radius * c.radius;
}

float areaofRectangle(Rectangle r)
{
  return r.length * r.width;
}

float areaofSquare(Square s)
{
  return s.length * s.length;
}

//implementing function to find perimeter of yard
float findPerimeter(Rectangle r, float& perimeter)
{
  perimeter = 2 * (r.length + r.width);
  return perimeter;
}

//implementing function to find cost to build fence around the yard
float findCost(float& perimeter, float unitCost)
{
  return unitCost * perimeter;
}