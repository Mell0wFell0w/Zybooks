#include <iostream>
using namespace std;

double CelsiusToKelvin(double valueCelsius) {
   double valueKelvin;

   valueKelvin = valueCelsius + 273.15;

   return valueKelvin;
}

/* Your solution goes here  */
double KelvinToCelsius(double valueKelvin){
	//T(°C) = T(K) - 273.15
	double valueCelsius = valueKelvin - 273.15;
	return valueCelsius;
}

int main() {
   double valueC;
   double valueK;

   valueC = 10.0;
   cout << valueC << " C is " << CelsiusToKelvin(valueC) << " K" << endl;

   cin >> valueK;
   cout << valueK << "  is " << KelvinToCelsius(valueK) << " C" << endl;

   return 0;
}

/* Using the CelsiusToKelvin function as a guide, create a new function, changing the name to KelvinToCelsius, and modifying the function accordingly.  */
