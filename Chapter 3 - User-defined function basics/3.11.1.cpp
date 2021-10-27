#include <iostream>
#include <iomanip>
using namespace std;

   double CalcRectanglePerimeter(double rectangleHeight, double rectangleWidth){
      double rectanglePerim = 0.0;
      cout << fixed << setprecision(1);
      rectanglePerim = rectangleHeight + rectangleHeight + rectangleWidth + rectangleWidth;
      
      return rectanglePerim;
      }
   void PrintRectanglePerimeter(double rectangleHeight, double rectangleWidth){
      
      
   cin >> rectangleHeight;
   cin >> rectangleWidth;
   
   
   cout << "A rectangle with height " << rectangleHeight << " and width " << rectangleWidth << " has a perimeter of " << CalcRectanglePerimeter(rectangleHeight, rectangleWidth) << "." << endl;
      
      
      
      }
      
   void DoubleRectanglePerimeter(double& rectangleHeight, double& rectangleWidth){
      
      rectangleWidth *= 2;
      rectangleHeight *= 2;
      
      
    
      }
      

int main() {
   
   
   return 0;
}

/* Functions to Implement

(1) Implement the CalcRectanglePerimeter function. CalcRectanglePerimeter takes parameters height and width as doubles and calculates and returns the perimeter of the rectangle.

(2) Implement the PrintRectanglePerimeter function. PrintRectanglePerimeter takes parameters height and width as doubles and calls CalcRectanglePerimeter. 
PrintRectanglePerimeter then outputs the results. The numbers should be printed with exactly one digit after the decimal point. Ex:
A rectangle with height 4.5 and width 6.3 has a perimeter of 21.6.

Note on Printing

For this Prep lab, place the following code within your function before any other printing in order for the results to print correctly:
cout << fixed << setprecision(1);

(3) Implement the DoubleRectanglePerimeter function. DoubleRectanglePerimeter takes parameters height and width as doubles and modifies them such that the perimeter of the rectangle they make is double but maintains the same ratio of height to width. You should not declare a return type for the function - i.e. the function should be void. You must still declare your function such that the code calling your function (in main) can see the changes to the arguments it passes in. (By default, functions operate on copies of the variables you pass in as arguments. Normally, changing parameter values in your function will not change the values of the variables that were used as arguments when the function was called, but using the right syntax you can change this behavior).

Additional note: 
you can assume that all values passed to your functions will be greater than 0. */
