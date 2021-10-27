#include <iostream>
using namespace std;

int main() {
   int userAge;

   cin >> userAge;

   if (/* Your solution goes here  */(userAge >= 18) && (userAge <= 25)) {
      cout << "Eligible" << endl;
   }
   else {
      cout << "Ineligible" << endl;
   }

   return 0;
}

/* Write an expression that prints "Eligible" if userAge is between 18 and 25 inclusive. 
Ex: 17 prints "Ineligible", 18 prints "Eligible". */
