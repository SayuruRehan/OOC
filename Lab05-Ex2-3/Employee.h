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
	double otHrs;	//Ex2
	double otRate;	//Ex2

public:
	void inputDetails();	//Ex3
	//void assignDetails(int pempno, const char pname[], double pbasicSal);
	//void setAllowance(double pallowance);
	void calcSal();
	void printPaySlip();
	//void setOtDetails(double potRate, double potHrs);
};