//create structures
struct Circle
{
float radius;
};

struct Rectangle
{
float length, width;
};

struct Square
{
float length;
};

//declare functions
float areaofCircle(Circle c);
float areaofRectangle(Rectangle r);
float areaofSquare(Square s);

//declaring function to find perimeter of the yard
float findPerimeter(Rectangle r, float& perimeter);

//declaring function to find cost to build fence around the yard
float findCost(float& perimeter, float unitCost);