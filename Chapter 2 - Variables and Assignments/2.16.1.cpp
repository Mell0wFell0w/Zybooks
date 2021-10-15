#include <iostream>
#include <string>      // Supports use of "string" data type
using namespace std;

int main() {
   int    userInt = 0;
   double userDouble = 0.0;
   char userChar = ' ';
   string userString = "Howdy";
   // FIXME: Define char and string variables
   
   cout << "Enter integer: ";
   cin  >> userInt;
   cout << endl;
   
   cout << "Enter double: ";
   cin  >> userDouble;
   cout << endl;
   
   cout << "Enter character: ";
   cin  >> userChar;
   cout << endl;
   
   cout << "Enter string: ";
   cin  >> userString;
   cout << endl;
   
   cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;
   cout << userString << " " << userChar << " " << userDouble << " " << userInt << endl;
   cout << userDouble << " cast to an integer is " << static_cast<int>(userDouble) << endl;
   
   // FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
   
   // FIXME (2): Output the four values in reverse
   
   // FIXME (3): Cast the double to an integer, and output that integer

   return 0;
}
