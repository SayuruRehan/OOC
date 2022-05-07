#include <iostream>
using namespace std;

class Circle{
  private:
    float radius;
  public:
    Circle();
    Circle(float r);
    void print();
    ~Circle();
};

Circle::Circle()
{
  radius = 0.0;
}

Circle::Circle(float r)
{
  radius = r;
}

void Circle::print()
{
  cout<<"Radius: "<< radius <<endl;
}

Circle::~Circle()
{
  cout<<"Destructor called for radius: "<< radius <<endl;
}

int main() {
  
  Circle c1;    //static objects
  Circle c2(5);  //dynamic objects

  Circle * c3 = new Circle();
  Circle * c4 = new Circle(10);

  c1.print();
  c2.print();

  c3->print();
  c4->print();

  delete c3;
  delete c4;

  return 0;
}