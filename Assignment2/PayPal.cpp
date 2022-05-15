#include <iostream>
#include <string>
#include "PayPal.h"
using namespace std;

PayPal::PayPal()
{
	payPalEmail = "";
}

PayPal::PayPal(string PP_email)
{
	payPalEmail = PP_email;
}

void PayPal::setPaypalDetails(string payPalEmail)
{
	
}

void PayPal::getPaypalDetails()
{
	
}

PayPal::~PayPal()
{
	cout << "Deleting PayPal Details: " << endl;
}
