//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <madelyn grace dean> on <10/28/24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day = 1;
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;

    while (day < 8)
    {
            cout << "How many text messages did you send on day " 
                << day << "? ";
            cin >> dailyTexts;
            totalTexts += dailyTexts;
            day += 1;
    }   //end while
        average = static_cast<double>(totalTexts) / (day - 1);
        cout << fixed << setprecision(0);
        cout << endl << "You sent approximately " 
            << average << " text messages per day." << endl;
    return 0;
}   //end of main function