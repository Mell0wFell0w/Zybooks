#include <iostream>
using namespace std;

double CalcPizzaArea(int numSmallPizza, int numMediumPizza, int numLargePizza) {
  double smallPizzaArea;
  double mediumPizzaArea;
  double largePizzaArea;
  const double LARGE_PIZZA_RADIUS = 12; // changed
  const double MEDIUM_PIZZA_RADIUS = 9; // changed
  const double SMALL_PIZZA_RADIUS = 7; // changed
  double totalSquareInches;
  const double PI_VAL = 3.14159265;

  smallPizzaArea = (PI_VAL * (SMALL_PIZZA_RADIUS * SMALL_PIZZA_RADIUS)) * numSmallPizza;
  
  mediumPizzaArea = (PI_VAL * (MEDIUM_PIZZA_RADIUS * MEDIUM_PIZZA_RADIUS)) * numMediumPizza;
  
  largePizzaArea = (PI_VAL * (LARGE_PIZZA_RADIUS * LARGE_PIZZA_RADIUS)) * numLargePizza;
  
  totalSquareInches = smallPizzaArea + mediumPizzaArea + largePizzaArea;
  
  return totalSquareInches;
}


int main() {

  int numGuests = 0;
  int numLargePizza;
  int numMediumPizza;
  int numSmallPizza;
  const int NUM_GUESTS_LARGE = 9; // changed
  const int NUM_GUESTS_MEDIUM = 5; // changed
  const int NUM_GUESTS_SMALL = 2; // changed
  double squareInchesPerGuest;
  double tipAmount;
  const double TIP_CONVERSION = 0.01;
  double costOfTip;
  double subTotal;
  int totalCost;
  const double SMALL_PIZZA_COST = 8.39; // changed
  const double MEDIUM_PIZZA_COST = 13.25; // changed
  const double LARGE_PIZZA_COST = 15.78; // changed
  const double ROUNDING_NUMBER = 0.5;
   
  cout << "Please enter how many guests to order for: " << endl;

  cin >> numGuests;
   
  numLargePizza = numGuests / NUM_GUESTS_LARGE;
  numMediumPizza = (numGuests % NUM_GUESTS_LARGE) / NUM_GUESTS_MEDIUM;
  numSmallPizza = ((numGuests % NUM_GUESTS_LARGE) % NUM_GUESTS_MEDIUM) / NUM_GUESTS_SMALL;
   
  cout << numLargePizza << " large pizzas, " << numMediumPizza << " medium pizzas, and " << numSmallPizza << " small pizzas will be needed." << endl;
  cout << endl;
   
  squareInchesPerGuest = CalcPizzaArea(numSmallPizza, numMediumPizza, numLargePizza) / static_cast<double>(numGuests);
   
  cout << "A total of " << CalcPizzaArea(numSmallPizza, numMediumPizza, numLargePizza) << " square inches of pizza will be ordered (" << squareInchesPerGuest << " per guest)." << endl;
  cout << endl;
  
  cout << "Please enter the tip as a percentage (i.e. 10 means 10%): " << endl;
  
  cin >> tipAmount;
  
  subTotal = (numSmallPizza * SMALL_PIZZA_COST) + (numMediumPizza * MEDIUM_PIZZA_COST) + (numLargePizza * LARGE_PIZZA_COST);
  costOfTip = subTotal * (tipAmount * TIP_CONVERSION);
  totalCost = (costOfTip + subTotal) + ROUNDING_NUMBER;
  
  cout << "The total cost of the event will be: $" << totalCost << endl;
  
  return 0;

}

/* Requirements

This is part of Main Lab 2 - Pizza. Copy your code from lab 2A here, then change 9 of your constants and submit. You should not change anything else.

Make sure your code between the two parts matches exactly except for the 9 changed constants, otherwise you will lose points (as per the deductions listed in 2A). If you do find that you need to change anything else for your code to work properly, you should make that change in 2A as well so that your code matches exactly except for those 9 changed constants.

Use the following new values for the pizzas in this part:

Pizza	   Price	Diameter	People Fed
Large	   $15.78	24 inches	9 people
Medium	 $13.25 18 inches	5 people
Small	   $8.39	14 inches	2 people
Notes

Because a small pizza now feeds 2 people, you may not be able to feed the guests exactly. In a real world situation you might handle this a number of different ways, but for this lab we will just round the number of small pizzas down to the nearest integer (the default behavior for integer division).

 */
