//Lab7-4.cpp - displays the average electric bill
//Created/revised by <madelyn grace dean> on <10/28/24>

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	double avgBill = 0.0;
	double bill = 0.0;
	double totalBills = 0.0;
	int months = 0;

	cout << "Bill for month 1: ";
	cin >> bill;
	
	while (bill >= 0.0)
	{
	totalBills += bill;
	months += 1;
	cout << "Bill for month " << months + 1 << ": ";
	cin >> bill;
	} //end while
	
	if (months > 0) {
		avgBill = totalBills / months;
		cout << fixed << setprecision(2);
		cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
	
	}
	else
	cout << "No bill amount entered." << endl;	
//end if
return 0;


}	//end of main function