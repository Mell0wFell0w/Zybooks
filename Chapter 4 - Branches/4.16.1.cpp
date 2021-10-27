#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   int stringSize;

   getline(cin, userInput);

   /* Your solution goes here  */
   stringSize = static_cast<int>(userInput.size());

   cout << "Size of userInput: " << stringSize << endl;

   return 0;
}

/* Assign the size of userInput to stringSize. Ex: if userInput is "Hello", output is: 
Size of userInput: 5 */
