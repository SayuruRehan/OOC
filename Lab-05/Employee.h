#pragma once
//declare all attributes and methods

class Employee
{
//access modifiers
private:
      int empno;
      char name[20];
      double basicSal;
      double allowance;
      double salary;
public:
      void assignDetails(int pempno,const char pname[], double pbasicSal);
      void setAllowance(double pallowance);
      void calcSal();
      void printPaySlip();
};