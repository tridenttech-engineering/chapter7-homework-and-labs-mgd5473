//hw7-16.cpp - displays three tip amounts
//Created/revised by <madelyn grace dean> on <10/28/24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill = 0.0;
	double tip = 0.0;

	cout << "Bill amount: ";
	cin >> bill;

	double rate = 0.1;
	while(bill >= 0.2)
	{
		
		tip = bill * rate;
		cout << rate * 100 << "% tip: ";
		cout << "$" << tip << endl;
		rate += 0.05;
	} //end while

	return 0;
}	//end of main function
