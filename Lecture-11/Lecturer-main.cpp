// Writen by Anjalie Gamage
// OOC Lecture 11

// Person, Student, Employee Classes

// Demonstrates the use of Inheritence
// Demo code only has an overridden display() method
// All other methods not implemented for simplicity

#include <iostream>
#include <cstring>
using namespace std;

class Person {
protected : 
  char name[20]; 
  char address[20];
  int age;
public:
  Person() {
      strcpy(name, "Keith");
      strcpy(address, "Kandy");
      age = 19;
   }
   void display() {
      cout << "this is Person class" << endl;
   }
   void displayDetails() {
     cout << name << " " << address << " " << age << endl; 
   }
};

class Employee : public Person {
protected : 
   int empNo;
   double salary;
public:
   Employee() { 
      strcpy(name, "Lalani");
      strcpy(address, "Colombo");
      age = 20;
      empNo = 167;
      salary = 45000;
   }    
   void display() {
	   cout << "this is Employee class. "
          << "Derived class from Person" 
          << endl; 
    }
    void calSalary() {};
    void displayDetails() {
        cout << name << " " << address << " " << age 
          << " " <<  empNo << " " << salary << endl; 
   }
};

class Lecturer : public Employee {
protected : 
   int noOfModules;
public:
   Lecturer() {
      strcpy(name, "Wichalya");
      strcpy(address, "Rathnapura");
      age = 27;
      empNo = 167;
      salary = 65000;
      noOfModules = 4;
    }
    void display() {
	   cout << "this is the Lecturer class. "
          << "Derived class from Employee. "
          << "Derived class from Person" 
          << endl;    
    }
    void calSalary() {};
    void displayDetails() {
        cout << name << " " << address << " " << age 
          << " " <<  empNo << " " << salary 
          << " " << noOfModules << endl; 
    }
};

int main() {
    Person p1;
    Employee e1;
    Lecturer l1;
    
    p1.display();
    e1.display();
    l1.display();
    l1.displayDetails();
    return 0;
}