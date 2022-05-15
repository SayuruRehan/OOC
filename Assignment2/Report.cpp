#include "Report.h"
#include <iostream>
using namespace std;

Report::Report()
{
	reportNo = 0;
	reportDate = "DD/MM/YYYY";
}

void Report::generateReservationReport(Reservation* r)
{
	
}

void Report::generateFlightReport(Flight* f)
{
	
}

void Report::generatePaymentReport(Payment* p)
{
	
}

Report::~Report()
{
	cout << "Deleting Reports" << endl;
}
