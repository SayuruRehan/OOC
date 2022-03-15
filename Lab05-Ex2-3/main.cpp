#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee emp1;

	//emp1.assignDetails(10, "Wimal", 50000);
	//emp1.setAllowance(5000);
	emp1.inputDetails();	//Ex3
	emp1.calcSal();
	emp1.printPaySlip();
	//emp1.setOtDetails();

}