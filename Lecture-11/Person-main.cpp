// Writen by Anjalie Gamage
// OOC Lecture 11

// Person, Student, Employee Classes

// Demonstrates the use of Inheritence
// Demo code only has an overridden display(), displayDetails() method
// The default constructor has sample values set once
//.     again for simplicity
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

class Student : public Person {
protected : 
   int studentNo;
   double GPA; 
public:
   Student() {
      strcpy(name, "Ajith");
      strcpy(address, "Matara");
      age = 22;
      studentNo = 115;
      GPA = 3.6;
   }
   void display() {
      cout << "this is Student class"        
           << "derived class from Person" 
           << endl;
    }
    void displayDetails() {
     cout << name << " " << address << " " << age 
          << " " <<  studentNo << GPA << endl; 
   }
   void calGPA() {}
};

class Employee : public Person{
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


int main() {
    Person p1;
    Student s1;
    Employee e1;
    p1.display();
    s1.display();
    e1.display();
    e1.displayDetails();
    return 0;
}