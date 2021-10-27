#include <iostream>
#include <string>
using namespace std;

int main() {
   string secretID;
   string firstName;
   string lastName;

   cin >> firstName;
   cin >> lastName;

   /* Your solution goes here  */
   secretID = firstName + " " + lastName;

   cout << secretID << endl;
   return 0;
}

/* Assign secretID with firstName, a space, and lastName. Ex: If firstName is Barry and lastName is Allen, then output is:
Barry Allen */
