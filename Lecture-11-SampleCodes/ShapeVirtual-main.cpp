// Shape Class Demo highlighting
// use of overloaded Constructors
// Please note this code only shows about how overloaded constructors work
// This is a simplified example
// OOC Lecture 11

#include <iostream>
#include <cstring>
using namespace std;

class Shape {
   protected:
      char name[20];

   public:
      Shape(char pname[]) {
         cout << "Shape called " << endl;
         strcpy(name, pname);
      }
      virtual void print() {
         cout << "Name : " << name << endl;
         cout << "Area : " << calcArea() << endl;
      }
      virtual int calcArea() {
         return 0;
      }
};

class Rectangle : public Shape {  //inheritance relationship
    protected:
       int length;
       int width;

    public:
       Rectangle(char pname[], int plength, int pwidth) 
          : Shape(pname) {
            cout << "Rectangle called " << endl;
            length = plength;
            width = pwidth;
          }
       int calcArea() {
           return length * width;
       }
       void print() {
           Shape::print(); // We can call a base class method as follows
           cout << "Length : " << length << endl;
           cout << "Width : " << width << endl;
       }
};

class Square : public Rectangle { //inheritance relationship
  public:
     Square(char pname[], int length) 
       : Rectangle(pname, length, length) {
          cout << "Square called" << endl;
       }
};

int main() {
   Shape *mySqr;
   mySqr = new Square("Red Square", 5);
   cout << "Lets calculate the Area now " << endl;
   cout << mySqr->calcArea() << endl;
   mySqr->print();

   Square sqr2("Ten", 10);
   sqr2.print();

   return 0;
}