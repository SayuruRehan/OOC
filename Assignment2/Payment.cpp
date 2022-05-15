#include <iostream>
#include "Payment.h"
using namespace std;

Payment::Payment()
{
	payID = "";
	payType = "";
	totalPayment = 0;
}

Payment::Payment(int p_payID, int p_PID, string pay_pType, string pay_pDate, float pay_totPay)
{
	payID = p_payID;
	passengerID = p_PID;
	payType = pay_pType;
	payDate = pay_pDate;
	totalPayment = pay_totPay;
	
}

void Payment::setPaymentDetails(int payID, string payType, float totalPayment)
{
	
}

void Payment::getPaymentDetails()
{
	cout << "Payment ID: " << payID << endl;
	cout << "Payment Type: " << payType << endl;
	cout << "Payment Amount: " << totalPayment << endl;
}

void Payment::confirmPaymentDetails()
{
	
}

void Payment::validatePaymentDetails()
{
	
}

Payment::~Payment()
{
	cout << "Deleting Payments" << endl;
}
