#include <iostream>
using namespace std;

int main() {
   char triangleChar = ' ';
   int triangleHeight = 0;
   int i;
   int j;
   
   cout << "Enter a character: " << endl;
   cin >> triangleChar;
   
   cout << "Enter triangle height: " << endl;
   cin >> triangleHeight;
      
  for(i = 0; i < triangleHeight; ++i) {
      for(j = 0; j < i; ++j) {
         cout << triangleChar << " ";
      }
      cout << triangleChar << " " << endl;
   }
   
   
   return 0;
}

/* This program will output a right triangle based on user specified height triangleHeight and symbol triangleChar.

(1) The given program outputs a fixed-height triangle using a * character. 
Modify the given program to output a right triangle that instead uses the user-specified triangleChar character. (1 pt)

(2) Modify the program to use a nested loop to output a right triangle of height triangleHeight. 
The first line will have one user-specified character, such as % or *. 
Each subsequent line will have one additional user-specified character until the number in the triangle's base reaches triangleHeight. 
Output a space after each user-specified character, including a line's last user-specified character. (2 pts)

Example output for triangleChar = % and triangleHeight = 5:

Enter a character: %
Enter triangle height: 5
% 
% % 
% % % 
% % % % 
% % % % %  */
