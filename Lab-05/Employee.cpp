#include "Employee.h"
#include <iostream>
#include <cstring>
using namespace std;

void Employee::assignDetails (int pempno, const char pname[], double pbasicSal)
{
  empno = pempno;
  strcpy(name, pname);
  basicSal = pbasicSal;
}

void Employee::setAllowance(double pallowance)
{
  allowance = pallowance;
}

void Employee::calcSal()
{
  salary = basicSal + allowance;
}

void Employee::printPaySlip()
{
  cout<<"-------------------------"<<endl;
  cout<<"Emp No \t:"<<empno<<endl;
  cout<<"Name \t:"<<name<<endl;
  cout<<"Basic Salary \t:"<<basicSal<<endl;
  cout<<"Allowance \t:"<<allowance<<endl;
  cout<<"Net Salary \t:"<<salary<<endl;
}
