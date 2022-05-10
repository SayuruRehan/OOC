// Shape Class Demo highlighting
// use of default Constructors
// Please note this code only shows about how default constructors work
// This is a simplified example
// OOC Lecture 11

#include <iostream>
using namespace std;

class Shape {
   protected:
      char name[20];
   public:
      Shape() {
         cout << "Shape Default constructor called " << endl;
      }
      int calcArea() {
         return 0;
      }
};

class Rectangle : public Shape {
    protected:
       int length;
       int width;
    public:
       Rectangle() {
           cout << "Rectangle Default constructor called " << endl;
       }
       int calcArea() {
           return length * width;
       }
};

class Square : public Rectangle {
  public:
     Square() {
          cout << "Square Default constructor called " << endl;
     }
};

int main() {
   Square mySqr;
   return 0;
}