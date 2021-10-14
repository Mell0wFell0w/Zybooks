#include <iostream>
using namespace std;

int main() {
   int userNum = 0;
   int userNum2 = 0;
   
   cin  >> userNum;
   cout << "Enter integer: " << endl;
   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << userNum * userNum << endl;
   cout << "And " << userNum << " cubed is " << userNum * userNum * userNum << "!!" << endl;
   cin >> userNum2;
   cout << "Enter another integer: " << endl;
   cout << userNum << " + " << userNum2 << " is " << userNum + userNum2 << endl;
   cout << userNum << " * " << userNum2 << " is " << userNum * userNum2 << endl;
   
   

   return 0;
}


/* 
Preplab
A variable like userNum can store a value like an integer. Extend the given program to print userNum values as indicated. (Submit for 2 points).

(1) Output the user's input.
Enter integer: 4
You entered: 4

(2) Extend to output the input squared and cubed. Hint: Compute squared as userNum * userNum. (Submit for 2 points, so 4 points total).
Enter integer: 4
You entered: 4
4 squared is 16 
And 4 cubed is 64!! 

(3) Extend to get a second user input into userNum2. Output sum and product. (Submit for 1 point, so 5 points total).
Enter integer: 4
You entered: 4
4 squared is 16 
And 4 cubed is 64!!
Enter another integer: 5
4 + 5 is 9
4 * 5 is 20 */
