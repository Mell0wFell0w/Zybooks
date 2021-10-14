#include <iostream>
using namespace std;

int main() {
   int amountToChange;
   int numFives;
   int numOnes;

   cin >> amountToChange;
   numFives = amountToChange / 5;

   /* Your solution goes here  */
   numOnes = amountToChange % 5;

   cout << "numFives: " << numFives << endl;
   cout << "numOnes: " << numOnes << endl;

   return 0;
}
