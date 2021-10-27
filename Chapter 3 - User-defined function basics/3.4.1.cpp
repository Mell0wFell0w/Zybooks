#include <iostream>
using namespace std;

double CalcBaseArea(double baseLength, double baseWidth) {
   return baseLength * baseWidth;
}

/* Your solution goes here  */
 double CalcPyramidVolume(double baseLength, double baseWidth, double pyramidHeight){
      double pyramidVolume;
      
      
      pyramidVolume = CalcBaseArea(baseLength, baseWidth) * pyramidHeight / 3.0;
      
      return pyramidVolume;
      }

int main() {
   double userLength;
   double userWidth;
   double userHeight;

   cin >> userLength;
   cin >> userWidth;
   cin >> userHeight;

   cout << "Volume: " << CalcPyramidVolume(userLength, userWidth, userHeight) << endl;

   return 0;
}

/* Define a function CalcPyramidVolume() with double data type parameters baseLength, baseWidth, and pyramidHeight, 
that returns as a double the volume of a pyramid with a rectangular base. CalcPyramidVolume() calls the given CalcBaseArea() function in the calculation.  */
