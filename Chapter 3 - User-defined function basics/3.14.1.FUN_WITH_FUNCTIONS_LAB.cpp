#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14;

double CalcRectanglePerimeter(double rectangleHeight, double rectangleWidth);
void PrintRectanglePerimeter(double rectangleHeight, double rectangleWidth);
void DoubleRectanglePerimeter(double& rectangleHeight, double& rectangleWidth);
double CalcCircumferenceOfCircle(double radiusCircle);
double CalcAreaOfCircle(double radiusCircle);
double CalcVolumeOfSphere(double radiusCircle);
void Swap(int& valueA, int& valueB);
void Swap(double& valueA, double& valueB);

int main(){
    cout << "Getting this line to print earns you points!\n";

    double rectangleHeight = 0;
    double rectangleWidth = 0;
    double radiusCircle = 0;

    cin >> rectangleHeight >> rectangleWidth >> radiusCircle;

    PrintRectanglePerimeter(rectangleHeight, rectangleWidth);
    cout << CalcRectanglePerimeter(rectangleHeight, rectangleWidth) << endl;
    cout << "... about to double height and width...\n";
    DoubleRectanglePerimeter(rectangleHeight, rectangleWidth);
    PrintRectanglePerimeter(rectangleHeight, rectangleWidth);

    //cout << CalcCircumferenceOfCircle(radiusCircle) << endl;
    //cout << CalcAreaOfCircle(radiusCircle) << endl;
    //cout << CalcVolumeOfSphere(radiusCircle) << endl;
    //Don't need to add these, Zybooks will run them automatically.

    return 0;
}

double CalcRectanglePerimeter(double rectangleHeight, double rectangleWidth) {
    double rectanglePerimeter;
    cout << fixed << setprecision(1);
    rectanglePerimeter = rectangleHeight + rectangleHeight + rectangleWidth + rectangleWidth;
    return rectanglePerimeter;
}
void PrintRectanglePerimeter(double rectangleHeight, double rectangleWidth) {
    cout << fixed << setprecision(1);
    cout << "A rectangle with height " << rectangleHeight << " and width " << rectangleWidth << " has a perimeter of " << CalcRectanglePerimeter(rectangleHeight, rectangleWidth) << "." << endl;
}

void DoubleRectanglePerimeter(double &rectangleHeight, double &rectangleWidth) {
    rectangleHeight *= 2;
    rectangleWidth *= 2;
}

double CalcCircumferenceOfCircle(double radiusCircle) {
    double circumferenceCircle = 2.0 * PI * radiusCircle;
    return circumferenceCircle;
}

double CalcAreaOfCircle(double radiusCircle) {
    double areaCircle = PI * pow(radiusCircle, 2.0);
    return areaCircle;
}

double CalcVolumeOfSphere(double radiusCircle) {
    double volumeSphere = (4.0 / 3.0) * PI * pow(radiusCircle, 3.0);
    return volumeSphere;
}

void Swap(int& valueA, int& valueB){
    int temp;
    temp = valueA;
    valueA = valueB;
    valueB = temp;
}
   
void Swap(double& valueA, double& valueB){
    double temp;
    temp = valueA;
    valueA = valueB;
    valueB = temp;
}

/* Fun With Functions

In this lab you will extend the set of functions that you began to develop in this chapter's prep lab 
(please feel free to copy and paste code from your prep lab into this lab). To complete this lab you will need to perform three principle tasks:

Debug and extend the existing code so that it compiles and executes properly.
Utilize function declarations (prototypes) to enable you to rearrange the positions of your function definitions.
Write additional functions as directed.
Requirements

You must develop this lab in CLion, an Integrated Development Environment (IDE), and then copy over your working version to zyBooks for submission and pass-off. Experiencing an IDE is one of the learning outcomes of this class, and is required for this lab. State in the Canvas submission quiz whether you exclusively used CLion to develop this lab, and Canvas will give you the points automatically. We encourage you to use CLion for developing the rest of the labs in this class. This is worth 10 points on this lab.

Part 1: Fix it
The template code provided to you is broken; your first job is to fix it. 
You will need to attempt to compile and run the code, interpret the error messages generated, and take steps to identify and resolve the problems. 
Hint: you will need to include code you wrote in the prep lab for this chapter.
Just getting your submission to compile and execute should be enough to pass the first test in the test suite. 
(i.e. you will earn some points) - but more work will be required to get everything working properly…

Part 2: Organize it
Utilize function prototypes (declarations) to enable you to place all custom function definitions BELOW the main function. 
This part of the lab will be worth 10 points and will be graded directly by the TAs. 
To reiterate - when you have completed this lab main should be the first function definition to appear in your source code. 
Use function prototypes to make this possible.

Part 3: Write it
Implement the following additional functions:
CalcCircumferenceOfCircle : this function accepts a single double argument - the value of the radius of a circle. The function computes and returns the circumference (as a double value) of a circle with such a radius.
CalcAreaOfCircle : this function accepts a single double argument - the value of the radius of a circle. The function computes and returns the area (as a double value) of a circle with such a radius.
CalcVolumeOfSphere : this function accepts a single double argument - the value of the radius of a sphere. The function computes and returns the volume (as a double value) of a sphere with such a radius.
Swap : this function is to be overloaded so that there are two versions, one that accepts two ints as arguments, and another that accepts two doubles as arguments. Both functions return void. The purpose of these functions is to "swap" or exchange the values of the two arguments. For example, if a program were to call Swap(valueA, valueB); with valueA set to 5 and valueB set to 7 before the call; then after the call valueA would now be set to 7, and valueB would contain 5.
Important Notes: These new functions are not called in the provided main function - nor should they be. As with the rectangle functions you developed in the prep lab - these additional functions will be tested solely using unit tests. The unit tests from the prep lab have also been imported and will be used to continue to ensure that your rectangle functions are operating properly. As a reminder - you should use function prototypes above your main function for these functions, and place their definitions below the main function. Even though main does not call these new functions, the unit tests will not operate properly if you do not follow this pattern.

Assumptions and additional information
You must use the value 3.14 for Pi. You must utilize a global constant to store this value. Failure to utilize 3.14 as a global constant variable will result in failed tests (because your results will not match ours).
Special Requirements Graded by TAs

You must adhere to the style guidelines. (up to 10 points)
You must utilize function prototypes as described in the lab. That is, main should be the first function definition that appears in your code (see "Part 2") (10 pts) */
