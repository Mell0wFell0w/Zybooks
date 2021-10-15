#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
using namespace std;

int main() {
   double wallHeight = 0.0;
   double wallWidth = 0.0;
   double wallArea = 0.0;
   double gallonsPaintNeeded = 0.0;
   int cansNeeded = 0;
   const double gallonsPerCan = 1.0;
   const double squareFeetPerGallon = 350.0;
   
   cout << "Enter wall height (feet): ";
   cin  >> wallHeight;
   cout << endl;
   
   cout << "Enter wall width (feet): ";
   cin >> wallWidth;
   cout << endl;               // FIXME (1): Prompt user to input wall's width
   
   // Calculate and output wall area
   wallArea = wallWidth * wallHeight;                 // FIXME (1): Calculate the wall's area
   cout << "Wall area: " << wallArea << " square feet"<< endl;  // FIXME (1): Finish the output statement
   
   // FIXME (2): Calculate and output the amount of paint in gallons needed to paint the wall
   gallonsPaintNeeded = wallArea/squareFeetPerGallon;
   cout << "Paint needed: " << gallonsPaintNeeded << " gallons" << endl;
   
   // FIXME (3): Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer

   cansNeeded = ceil((gallonsPaintNeeded/gallonsPerCan));
   cout << "Cans needed: " << cansNeeded << " can(s)" << endl;
   
   return 0;
}

/* (1) Prompt the user to input a wall's height and width. Calculate and output the wall's area. (Submit for 2 points).
Enter wall height (feet): 12
Enter wall width (feet): 15
Wall area: 180 square feet

(2) Extend to also calculate and output the amount of paint in gallons needed to paint the wall. 
Assume a gallon of paint covers 350 square feet. Store this value using a const double variable. (Submit for 2 points, so 4 points total).
Enter wall height (feet): 12
Enter wall width (feet): 15
Wall area: 180 square feet
Paint needed: 0.514286 gallons

(3) Extend to also calculate and output the number of 1 gallon cans needed to paint the wall. 
Hint: Use a math function to round up to the nearest gallon. Note that math and cmath are for our current purposes names for the same library. 
Look up the proper math library function on the web. Note that in the main lab, you will use a different technique to round. 
(Submit for 2 points, so 6 points total).

Enter wall height (feet): 12
Enter wall width (feet): 15
Wall area: 180 square feet
Paint needed: 0.514286 gallons
Cans needed: 1 can(s) */
