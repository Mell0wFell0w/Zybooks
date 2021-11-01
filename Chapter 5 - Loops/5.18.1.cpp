#include <iostream>
using namespace std;

int main() {
   int arrowBaseHeight = 0;
   int arrowBaseWidth = 0;
   int arrowHeadWidth = 0;
   
   cout << "Enter arrow base height: " << endl;
   cin >> arrowBaseHeight;
   
   cout << "Enter arrow base width: " << endl;
   cin >> arrowBaseWidth;
   
   while (arrowHeadWidth <= arrowBaseWidth){
   cout << "Enter arrow head width: " << endl;
   cin >> arrowHeadWidth;
   }
   
   for (int i = 0; i < arrowBaseHeight; i++) {
      for (int j = 0; j < arrowBaseWidth; j++) { 
   cout << "*";
      }
      cout << endl;
   }
   int k = arrowHeadWidth;
   for (int i = 1; i <= arrowHeadWidth; i++){
      for(int j = k; j > 0; j--){
         for(int j = k; j > 0; j--){
         cout << "*";
         }
         k -= 1;
         cout << endl;
      }
   }
         
   return 0;
}

/* This program outputs a downwards facing arrow composed of a rectangle and a right triangle. 
The arrow dimensions are defined by user specified arrow base height, arrow base width, and arrow head width.

(1) Modify the given program to use a loop to output an arrow base of height arrowBaseHeight. (1 pt)

(2) Modify the given program to use a loop to output an arrow base of width arrowBaseWidth. 
Use a nested loop in which the inner loop draws the *’s, and the outer loop iterates a number of times equal to the height of the arrow base. (1 pt)

(3) Modify the given program to use a loop to output an arrow head of width arrowHeadWidth. 
Use a nested loop in which the inner loop draws the *’s, and the outer loop iterates a number of times equal to the height of the arrow head. (2 pts)

(4) Modify the given program to only accept an arrow head width that is larger than the arrow base width. 
Use a loop to continue prompting the user for an arrow head width until the value is larger than the arrow base width. (1 pt)

Example output for arrowBaseHeight = 5, arrowBaseWidth = 2, and arrowHeadWidth = 4:

Enter arrow base height: 5
Enter arrow base width: 2
Enter arrow head width: 4

**
**
**
**
**
****
***
**
* 

*/
