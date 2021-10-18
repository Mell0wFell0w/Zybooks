#include <iostream>
using namespace std;

/* Your solution goes here  */
int PrintFeetInchShort(int numFeet, int numInches){
   cout << numFeet << "\' " << numInches << "\"" << endl;
   
   return numFeet, numInches;
   }

int main() {
   int userFeet;
   int userInches;

   cin >> userFeet;
   cin >> userInches;

   PrintFeetInchShort(userFeet, userInches);  // Will be run with (5, 8), then (4, 11)

   return 0;
}

/* Define a function PrintFeetInchShort(), with int parameters numFeet and numInches, that prints using ' and " shorthand. End with a newline. 
Remember that outputting 'endl' outputs a newline. Ex: PrintFeetInchShort(5, 8) prints: 
5' 8"
*/
