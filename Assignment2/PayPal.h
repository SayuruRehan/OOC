#pragma once
#include "Payment.h"
#include <string>

class PayPal : public Payment{
	protected:
		string payPalEmail;
		
	public:
		PayPal();
		PayPal(string PP_email);
		void setPaypalDetails(string payPalEmail);
		void getPaypalDetails();
		~PayPal();
};
