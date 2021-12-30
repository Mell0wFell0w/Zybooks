#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int courseGrades[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      cin >> courseGrades[i];
   }

   /* Your solution goes here  */
   for(i = 0; i < NUM_VALS; i++){
		cout << courseGrades[i] << " ";
	}
	cout << endl;
   
   for(i = NUM_VALS - 1; i >= 0; i--){
		cout << courseGrades[i] << " ";
	}
	cout << endl;

   return 0;
}

/*Write a for loop to print all elements in courseGrades, following each element with a space (including the last). Print forwards, then backwards. End each loop with a newline. Ex: If courseGrades = {7, 9, 11, 10}, print:*/
