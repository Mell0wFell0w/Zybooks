#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string GetUserName();
void GreetingPrompt(string userName);
int TotalTime(int prepTime, int cookTime);
void HowMuchTime();
void RandomDrink();
bool PlayAgain();

int main() {
    char userResponse;
    int prepTime;
    int cookTime;
    int totalTime;
    string userName;

    do {
        GreetingPrompt(userName);
        cin >> userResponse;

        if (userResponse == 'y') {
            cout << "Do you have ingredients? Enter y/n" << endl;
            cin >> userResponse;
            if (userResponse == 'y') {
                HowMuchTime();
                cin >> prepTime >> cookTime;
                TotalTime(prepTime, cookTime);
                totalTime = TotalTime(prepTime, cookTime);
                if (totalTime < 20) {
                    cout << "You should make ramen for dinner." << endl;
                    RandomDrink();
                    cout << "THE END" << endl;
                } else if (totalTime >= 20) {
                    cout << "Do you feel lazy? Enter y/n" << endl;
                    cin >> userResponse;
                    if (userResponse == 'y') {
                        cout << "You should make Ramen for dinner." << endl;
                        RandomDrink();
                        cout << "THE END" << endl;
                    } else if (userResponse == 'n') {
                        cout << "You should make stir-fry for dinner" << endl;
                        RandomDrink();
                        cout << "THE END" << endl;
                    } else {
                        for (int i = 0; i < 10; ++i) {
                            cout << "Please enter a valid input" << endl;
                            cin >> userResponse;

                            if (userResponse == 'y' || userResponse == 'n') {
                                break;
                            }
                        }
                    }
                } else {
                    for (int i = 0; i < 10; ++i) {
                        cout << "Please enter a valid input" << endl;
                        cin >> userResponse;

                        if (userResponse == 'y' || userResponse == 'n') {
                            break;
                        }
                    }
                }

            } else if (userResponse == 'n') {
                cout << "Are you willing to go shopping? Enter y/n" << endl;
                cin >> userResponse;
                if (userResponse == 'y') {
                    HowMuchTime();
                    cin >> prepTime >> cookTime;
                    TotalTime(prepTime, cookTime);
                    totalTime = TotalTime(prepTime, cookTime);
                    if (totalTime < 20) {
                        cout << "You should make ramen for dinner." << endl;
                        RandomDrink();
                        cout << "THE END" << endl;
                    } else if (totalTime >= 20) {
                        cout << "Do you feel lazy? Enter y/n" << endl;
                        cin >> userResponse;
                        if (userResponse == 'y') {
                            cout << "You should make Ramen for dinner." << endl;
                            RandomDrink();
                            cout << "THE END" << endl;
                        } else if (userResponse == 'n') {
                            cout << "You should make stir-fry for dinner" << endl;
                            RandomDrink();
                            cout << "THE END" << endl;
                        } else {
                            for (int i = 0; i < 10; ++i) {
                                cout << "Please enter a valid input" << endl;
                                cin >> userResponse;

                                if (userResponse == 'y' || userResponse == 'n') {
                                    break;
                                }
                            }
                        }
                    }

                } else if (userResponse == 'n') {
                    cout << "You should order take-out." << endl;
                    RandomDrink();
                    cout << "THE END" << endl;
                } else {
                    for (int i = 0; i < 10; ++i) {
                        cout << "Please enter a valid input" << endl;
                        cin >> userResponse;

                        if (userResponse == 'y' || userResponse == 'n') {
                            break;
                        }
                    }
                }
            } else {
                for (int i = 0; i < 10; ++i) {
                    cout << "Please enter a valid input" << endl;
                    cin >> userResponse;

                    if (userResponse == 'y' || userResponse == 'n') {
                        break;
                    }
                }
            }
        } else if (userResponse == 'n') {
            cout << "You should order take-out." << endl;
            RandomDrink();
            cout << "THE END" << endl;
        } else {
            for (int i = 0; i < 10; ++i) {
                cout << "Please enter a valid input" << endl;
                cin >> userResponse;

                if (userResponse == 'y' || userResponse == 'n') {
                    break;
                }
            }
        }
    } while (PlayAgain());

    return 0;
}

void GreetingPrompt(string userName) {
    userName = GetUserName();
    cout << "     ";
    for (size_t i = 0; i < userName.size(); ++i){
        cout << ">";
    }
    cout << endl;
    cout << "Hey, " << userName << "!" << endl;
    cout << "     ";
    for (size_t i = 0; i < userName.size(); ++i){
        cout << "<";
    }
    cout << endl;

    cout << "Every night you have to make the decision of what to eat for dinner. " << endl <<
         "As a college student you sometimes don't have time to even think about " << endl <<
         "what to eat. This program is designed to help you figure out what to " << endl <<
         "eat for dinner!" << endl << "It will also help you by providing a random drink generator. " << endl <<
         "First question, do you want to cook? Enter y/n" << endl;

}
int TotalTime(int prepTime, int cookTime) {
    int totalTime;
    totalTime = prepTime + cookTime;
    return totalTime;
}

string GetUserName() {
    string userName;
    cout << "Hello, please enter your first name." << endl;
    cin >> userName;
    return userName;
}

void HowMuchTime() {
    cout << "How much time do you have? Enter two numbers." << endl <<
         "The first is how much prep time you need and the second is how much cook time you need." << endl <<
         "Both will be in minutes." << endl;
}

void RandomDrink(){

    srand(time(nullptr));
    int drinkChoice = rand() % 3;
    if (drinkChoice == 0) {
        cout << "Your drink is water." << endl;
    }
    else if (drinkChoice == 1){
        cout << "Your drink is milk." << endl;
    }
    else if (drinkChoice == 2){
        cout << "Your drink is juice." << endl;
    }
}
bool PlayAgain(){
    char playAgainResponse;
    cout << "Would you like to play again? Enter y/n" << endl;
    cin >> playAgainResponse;
    if (playAgainResponse == 'y'){
        return true;
    }
    else {
        return false;
    }
}

/* Looping Multipath Adventure

Modify your Multipath Adventure from the previous lab to include loops. 
The criteria by which you will be graded are listed under "Special Requirements Graded by TAs". 
We suggest that you fulfill the requirements by doing the following (however, these are only suggestions):

Use a while loop to enable the player to play your game multiple times
Create an input function that utilizes a loop to prompt for and validate user input
Takes a prompt (string) as the argument
Returns the valid input (string)
For the requirement to use at least 1 for loop:
Consider using for loop(s) to draw box or stars around prompt in your input function (see above)
For the requirement to use at least 1 instance of rand():
Consider including a randomized process in your game, such as rolling a die, and using rand() to simulate the process
Consider including a point where the game randomly selects between multiple possible descriptions. 
For example, you could have the game randomly decide whether to describe the weather as "sunny" or "rainy".
(If your code already fulfilled these, then you are done!)

If you need to, you can adjust the decision tree as you are programming. Resubmit the final decision tree with the lab submission quiz.

Note that you are allowed to use concepts we have not covered in class if you would like to. This might also help you in preparing for future labs.

As part of grading your lab, the TAs will randomly pick 2 paths through your decision tree to check your work. 
They will reference your submitted decision tree to choose the paths and make sure that when they run your code it takes them through the path as specified in your decision tree.

To make your game easier to play (and thus make it easier for the TAs to grade) you should provide prompts before each input that make clear what inputs are valid.

A Note On Representing Loops in your Decision Tree

If you choose to represent a loop on your decision tree with an arrow, make sure that you make it clear where the loop starts and where it is going to end. 
This should only be done if you loop from a "lower" part of your tree to a "higher" part several times. If you have a loop running in the same point of the tree, 
then you may add a loop arrow if you choose, but you don't have to do so.

Special Requirements Graded by TAs
You must adhere to the style guidelines. (up to 10 points)
Your code must meet all of the Special Requirements from the previous Multipath Adventure Lab
It is fine if you re-organize your code and have different paths or functions than you did in Lab 4, 
but make sure that you still meet the requirements as listed in Lab 4.
If you re-organize your code, make sure to also update your Decision Tree
Make sure to review the deductions listed in the previous lab and any feedback you received to avoid losing points here.
You must have at least 1 for loop in your code (15 points)
The for loop must actually be used as a loop, and it must have real effect in your program 
(it is theoretically possible to use the for loop syntax without actually using it as a loop or creating any real effect, but if you do this you will lose points)
You must have at least 1 while loop in your code (15 points)
The note on for loops above applies equally to this deduction regarding while loops
You must have at least 1 instance of rand() in your code (5 points)
Your use of rand() must have real effect in your program (it is possible to use rand() to generate a random number without actually using the random number, 
but if you do this you will lose points) */
