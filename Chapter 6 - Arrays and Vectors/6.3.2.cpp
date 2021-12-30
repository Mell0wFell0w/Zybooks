#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 5;
   int runTimes[NUM_ELEMENTS];
   int i;

   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cin >> runTimes[i];
   }

   /* Your solution goes here  */
   cout << runTimes[0] << endl;
	cout << runTimes[1] << endl;
	cout << runTimes[2] << endl;

   return 0;
}

//Write three statements to print the first three elements of array runTimes. Follow each statement with a newline. 
//Ex: If runTime = {800, 775, 790, 805, 808}, print:
//800 
//775 
//790
