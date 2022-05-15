#pragma once
#include "Passenger.h"
#include "Staff.h"
#include "Report.h"
#include <string>
using namespace std;

class Payment
{
	protected:
		int payID;
		string payType;
		float totalPayment;
		Passenger* p;		//passenger dynamic object
		
	public:
		Payment();		//constructor
		Payment(int p_payID, int p_PID, string pay_pType, string pay_pDate, float pay_totPay);	//overloaded constructor
		void setPaymentDetails (int payID, string payType, float totalPayment);
		float getPaymentDetails();
		void confirmPaymentDetails();
		void validatePaymentDetails();
		~Payment();		//destructor
};
