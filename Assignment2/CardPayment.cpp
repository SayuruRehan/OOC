#include <iostream>
#include "CardPayment.h"
#include <cstring>
using namespace std;

CardPayment::CardPayment()
{
	strcpy(cardNo, "0000 0000 0000 0000");
	cardType = "";
	exp = "MM/YY";
	strcpy(cvv, "000");
}


void CardPayment::setCardDetails(char CardNo[20], string CardType, string Exp, char CVV[3])
{
	strcpy(cardNo, CardNo);
	cardType = CardType;
	exp = Exp;
	strcpy(cvv, CVV);
}


void CardPayment::getCardDetails()
{
	getPaymentDetails();
	cout << "Card No.: " << cardNo << endl;
	cout << "Card Type: " << cardType << endl;
	cout << "Card Expiration Date: " << exp << endl;
	cout << "Card CVV: " << cvv << endl;
}


CardPayment::~CardPayment()
{
	cout << "Deleting Card Payment Details" << endl;
}
