#pragma once
#include "Reservation.h"
#include "Flight.h"
#include "Payment.h"
#include <string>
using namespace std;

class Report
{
	private:
		int reportNo;
		string reportDate;
		
	public:
		Report();		//constructor
		void generateReservationReport(Reservation* r);
		void generatePaymentReport(Payment* p);
		void generateFlightReport(Flight* f);
		void displayReport();
		~Report();		//destructor
};
