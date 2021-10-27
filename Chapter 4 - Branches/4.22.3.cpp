#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double outsideTemperature;

   cin >> outsideTemperature;

   /* Your solution goes here  */
   cout << setprecision(2) << fixed << outsideTemperature << endl;

   return 0;
}

/* Write a single statement that prints outsideTemperature with 2 digits in the fraction (after the decimal point). End with a newline. 
Sample output with input 103.45632:
103.46
 */
