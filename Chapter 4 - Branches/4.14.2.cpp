#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstString;
   string secondString;

   cin >> firstString;
   cin >> secondString;

   /* Your solution goes here  */
   if (firstString > secondString) {
      cout << secondString << " " << firstString << endl;
      }
      else {
         cout << firstString << " " << secondString << endl;
         }

   return 0;
}

/* Print the two strings, firstString and secondString, in alphabetical order. Assume the strings are lowercase. End with newline. Sample output:
capes rabbits */
