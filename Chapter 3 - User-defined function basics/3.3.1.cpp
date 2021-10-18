#include <iostream>
using namespace std;

/* Your solution goes here  */
double MphAndMinutesToMiles(int milesPerHour, int minutesTraveled) {
       double milesTraveled;
       double hoursTraveled;
       
   hoursTraveled = minutesTraveled / 60.0;
   milesTraveled = hoursTraveled * milesPerHour;

       return milesTraveled;
    }

int main() {
   double milesPerHour;
   double minutesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}

/*  */
