#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   char firstLetter;

   getline(cin, userInput);
   cin >> firstLetter;

   if (/* Your solution goes here  */firstLetter == userInput.at(0)) {
      cout << "Found match: " << firstLetter << endl;
   }
   else {
      cout << "No match: " << firstLetter << endl;
   }

   return 0;
}

/* Write an expression to detect that the first character of userInput matches firstLetter. */
