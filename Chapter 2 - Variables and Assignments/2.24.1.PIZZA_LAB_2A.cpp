#include <iostream>
using namespace std;

double CalcPizzaArea(int numSmallPizza, int numMediumPizza, int numLargePizza) {
  double smallPizzaArea;
  double mediumPizzaArea;
  double largePizzaArea;
  const double LARGE_PIZZA_RADIUS = 10;
  const double MEDIUM_PIZZA_RADIUS = 8;
  const double SMALL_PIZZA_RADIUS = 6;
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
  const int NUM_GUESTS_LARGE = 7;
  const int NUM_GUESTS_MEDIUM = 3;
  const int NUM_GUESTS_SMALL = 1;
  double squareInchesPerGuest;
  double tipAmount;
  const double TIP_CONVERSION = 0.01;
  double costOfTip;
  double subTotal;
  int totalCost;
  const double SMALL_PIZZA_COST = 7.28;
  const double MEDIUM_PIZZA_COST = 11.48;
  const double LARGE_PIZZA_COST = 14.68;
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

/* Background

You have been elected as President of the Pizza Council of BYUSA. 
Your primary responsibility is determining how many pizzas should be ordered for each BYUSA event. 
To make things easier, you decide to write a C++ program to help you do the calculations.

Reminder

For all main labs, before you start coding 
1) read through the entire specification, 
2) view the companion lab videos for the lab, and 
3) think through at a high level how your full solution will look. Then start coding.
Also, remember to carefully review the Style Guide and Grading and Style Details in Canvas, as ALL style guidelines are required for this and future labs.

Requirements

This lab can be done individually or as pair programming. 
Make sure you read again the syllabus section on "Pair Programming" and the article "All I really need to know about pair programming I learned in kindergarten," 
so that you understand our expectations of what pair programming really means and what you will be committing to.

Part 1 - Count your Many Pizzas
Prompt the user for how many guests to order for.
Determine and report the number of large, medium, and small pizzas you need to order.
For every 7 guests, order one large pizza.
For every 3 guests left over, order one medium pizza.
For every 1 guest left over, order one small pizza.

Part 2 - Serving Size
Compute and report the total area of pizza (in square inches) you need to order. Do not round these values.
Compute and report the total area of pizza (in square inches) each guest can eat. Do not round these values.

Part 3 - Supplementing the Budget
Prompt the user for the percent of the total price to be paid as a tip. The tip percentage will be input as a whole integer from 0 to 100.
Compute and report the total cost (including tip) of all the pizzas, rounding to the nearest dollar. 
Note: Changing the value type into an int alone will not round to the nearest dollar. See the end of the "Notes" section below.

Part 4 - The "Magic" of Avoiding Magic Numbers
Sometimes it may feel like a nuisance to make sure to properly use constants for magic numbers, so here we give you the opportunity to see how useful it can be. 
By changing just some of the constants, your program can simulate any pizza sizes and prices, without having to touch any other part of your code. 
Those constants are how many people each pizza feeds, the diameters of each pizza, and the cost of each pizza. 
Make sure that you have written your code so that by changing only those nine values, and re-compiling, you can simulate any arbitrary pizza values.

Since you will be changing constants and recompiling for Part 4, you will be submitting a different compiled program than used in Parts 1, 2, and 3. 
Thus, do not submit the updated program here. 
Instead, copy your program from here into the following zyBook section (Main Lab 2B), change 9 of your constants, and submit the program from there. 
The grading TA will combine the points from the auto-grade of both 2A and 2B to get your full auto-grade points. 
The new values you will use are given in section Main Lab 2B.

Make sure your code between the two parts matches exactly except for the 9 changed constants, otherwise you will lose points (as per the deductions listed below). 
If you do find that you need to change anything else for your code to work properly, you should make that change in 2B and here as well so that your code matches exactly except for those 9 changed constants.

Implementation

You need a constant for π. Use the exact const double PI = 3.14159265 to make sure you match with our implementation. Use the following values for the pizzas:

Pizza	Price	Diameter	People Fed
Large	$14.68	20 inches	7 people
Medium	$11.48	16 inches	3 people
Small	$7.28	12 inches	1 person

Special Requirements Graded by TAs
You must adhere to the style guidelines. (up to 10 points)
The TA will check for adherence to the Style Guidelines that are graded by hand. 
Carefully read BOTH the Style Guide and Grading and Style Details documents in Canvas BEFORE you request grading on this lab. 
This counts for up to 10 points of your lab score so pay close attention to each style.
Using constants instead of magic numbers is part of the suggested style but not in the Style Guide. 
However, in this lab you must use constants for what otherwise might look like magic numbers. 
You must have constants for pizza diameters, pi, pizza costs, and people fed per pizza (7, 3, 1). 
Thus, if we wanted to change the diameter, price, and/or number of people fed by a pizza, they would only have to be updated in the declaration, and the program would work fine with the new values (you will do this in Part 4). 
We expect you follow this practice in every lab, but will only grade when specifically mentioned as a special requirement like we do for this lab. (5 points)
For Part 4, you must only change 9 numbers, and nothing else. These changes must be in the values assigned to constants. (10 points)
Make sure your code between the two parts matches exactly except for the 9 changed constants, otherwise you will lose points. 
If you do find that you need to change anything else for your code to work properly, you should make that change in 2B and here as well so that your code matches exactly except for those 9 changed constants.

Sample Input and Output
When you run the program in the case where there are 303 guests and you want to give a 15% tip, the input will look like:

Sample Input
303
15

Sample Output
In this case the output would look like:

Please enter how many guests to order for: 
43 large pizzas, 0 medium pizzas, and 2 small pizzas will be needed.

A total of 13735 square inches of pizza will be ordered (45.3302 per guest).

Please enter the tip as a percentage (i.e. 10 means 10%): 
The total cost of the event will be: $743
Never "Hard-Code" your Output

Assume you had to calculate and output the number of pepperonis needed for a pizza order. After your code to calculate the number you might have a statement such as:

cout << "You will need " << numPepperonis << " pepperonis.";
Assume further that your code to calculate numPepperonis is buggy and does not match the number that you notice the auto-grader expects (say 324 in this case). You might be tempted to just directly output that value (hard-code) so as to get the points from the auto-grader with a variation like:

numPepperonis = 324;
cout << "You will need " << numPepperonis << " pepperonis.";
Of course, that would only get you points for tests where tests cases are visible, but as explained in the syllabus if you hard-code results on any lab or exam you will not get points for those test cases.

Note on Running your Code

The test cases start with just the number of pizzas, so you can start there and then build up. Also, you can run and/or submit your code as many times as you like.

Note on Input/Output

Note that when zybooks runs in "Submit Mode" it keeps your input and output separate. After you read in a value from your input box, such as how many guests to order for, you might have to print an endl or two, mimicking the enter that a user would normally hit after typing in an input. This lab requires you to be careful about your output formatting, just like the first lab, so plan to spend a little time playing with the formatting to get it right.

Note on Rounding

Consider the code shown below:

double arbitraryValue = 3.14159265;
int anInt = arbitraryValue;

cout << anInt << endl;
This code prints the number 3 as you might expect, but not for the reason that you might think. C++ does not round the value, it merely drops the decimal part. Thus

double arbitraryValue = 2.71828;
int anInt = arbitraryValue;

cout << anInt << endl;
prints the value 2, not 3 as we might hope. We can ask C++ to round the value before we do the assignment like:

double arbitraryValue = 2.71828;
int anInt = round(arbitraryValue);

cout << anInt << endl;
The function "round" returns the rounded value. "round" returns the rounded value as a double (but it will be 0 to the right of the decimal). When you assign it to an integer there will be an implicit type conversion. You MUST include math.h at the start if you want to use "round" in your program.

Another common way to trick C++ into rounding is to add 1/2 before C++ truncates the value, like this:

double arbitraryValue = 2.71828;
int anInt = arbitraryValue + 0.5;

cout << anInt << endl;
2.71828 + 0.5 is 3.21828. When we drop the decimal part we are left with 3 as we would hope for the rounded value. Conveniently this also works with 3.14159265: 3.14159265 + 0.5 = 3.64159265, which when we drop the decimal part leaves just 3.

While this is sufficient for this lab, note that this approach does not work for negative numbers, so "round" would generally be safer. */
