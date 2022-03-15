#include "Employee.h"
#include <iostream>
#include <cstring>
using namespace std;

void Employee::inputDetails()//Ex3
{
	cout << "Input Employee No : ";
	cin >> empno;
	cout << "Input Name : ";
	cin >> name;
	cout << "Input Basic Salary :";
	cin >> basicSal;
	cout << "Input Allowance :";
	cin >> allowance;
	cout << "Input OT Hours :";
	cin >> otHrs;
	cout << "Input OT Rate :";
	cin >> otRate;
}

/*
void Employee::assignDetails(int pempno, const char pname[], double pbasicSal)
{

	empno = pempno;
	strcpy_s(name, pname);
	basicSal = pbasicSal;
}

void Employee::setAllowance(double pallowance)
{
	allowance = pallowance;
}
*/
void Employee::calcSal()
{
	salary = basicSal + allowance;
}

void Employee::printPaySlip()
{
	cout << "-------------------------" << endl;
	cout << "Emp No \t:" << empno << endl;
	cout << "Name \t:" << name << endl;
	cout << "Basic Salary \t:" << basicSal << endl;
	cout << "Allowance \t:" << allowance << endl;
	cout << "OTSalary \t:" << (otHrs * otRate) << endl;
	cout << "Net Salary \t:" << basicSal + (otHrs * otRate) << endl;
	cout << "-------------------------" << endl;
}

/*
void Employee::setOtDetails(double potRate, double potHrs)//Ex2
{
	otHrs = potHrs;
	otRate = potRate;
}
*/