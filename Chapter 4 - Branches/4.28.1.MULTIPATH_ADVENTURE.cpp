#include <iostream>
#include <string>
using namespace std;

string GetUserName();
void GreetingPrompt(string userName);
int TotalTime(int prepTime, int cookTime);
void HowMuchTime();

int main() {
    char userResponse;
    int prepTime;
    int cookTime;
    int totalTime;
    string userName;
    cout << "Hello, World!" << endl;

    GreetingPrompt(userName);
    cin >> userResponse;

    if (userResponse == 'y'){
        cout << "Do you have ingredients? Enter y/n" << endl;
        cin >> userResponse;
        if (userResponse == 'y') {
            HowMuchTime();
            cin >> prepTime >> cookTime;
            TotalTime(prepTime, cookTime);
            totalTime = TotalTime(prepTime, cookTime);
            if (totalTime < 20){
                cout << "You should make ramen for dinner." << endl;
                cout << "THE END" << endl;
            }
            else if (totalTime >= 20){
                cout << "Do you feel lazy? Enter y/n" << endl;
                cin >> userResponse;
                if (userResponse == 'y'){
                    cout << "You should make Ramen for dinner." << endl;
                    cout << "THE END" << endl;
                }
                else if (userResponse == 'n'){
                    cout << "You should make stir-fry for dinner" << endl;
                    cout << "THE END" << endl;
                }
                else {
                    cout << "Please enter a valid input." << endl;
                }
            }
            else {
                cout << "Please enter a valid input." << endl;
            }

        }
        else if (userResponse == 'n'){
            cout << "Are you willing to go shopping? Enter y/n" << endl;
            cin >> userResponse;
            if (userResponse == 'y'){
                HowMuchTime();
                cin >> prepTime >> cookTime;
                TotalTime(prepTime, cookTime);
                totalTime = TotalTime(prepTime, cookTime);
                if (totalTime < 20){
                    cout << "You should make ramen for dinner." << endl;
                    cout << "THE END" << endl;
                }
                else if (totalTime >= 20){
                    cout << "Do you feel lazy? Enter y/n" << endl;
                    cin >> userResponse;
                    if (userResponse == 'y'){
                        cout << "You should make Ramen for dinner." << endl;
                        cout << "THE END" << endl;
                    }
                    else if (userResponse == 'n'){
                        cout << "You should make stir-fry for dinner" << endl;
                        cout << "THE END" << endl;
                    }
                    else {
                        cout << "Please enter a valid input." << endl;
                    }
                }

            }
            else if(userResponse == 'n') {
                cout << "You should order take-out." << endl;
                cout << "THE END" << endl;
            }
            else {
                cout << "Please enter a valid input." << endl;
            }
        }
        else{
            cout << "Please enter a valid input." << endl;
        }
    }
    else if (userResponse == 'n'){
        cout << "You should order take-out." << endl;
        cout << "THE END" << endl;
    }
    else {
        cout << "Please enter a valid input." << endl;
    }

    return 0;
}

void GreetingPrompt(string userName) {
    userName = GetUserName();
    cout << "Hey, " << userName << "! Every night you have to make the decision of what to eat for dinner. " << endl <<
         "As a college student you sometimes don't have time to even think about " << endl <<
         "what to eat. This program is designed to help you figure out what to " << endl <<
         "eat for dinner!" << endl << "First question, do you want to cook? Enter y/n" << endl;
}
int TotalTime(int prepTime, int cookTime) {
    int totalTime;
    totalTime = prepTime + cookTime;
    return totalTime;
}

string GetUserName() {
    string userName;
    cout << "Hello, please enter your first name." << endl;
    getline(cin, userName);
    return userName;
}

void HowMuchTime() {
    cout << "How much time do you have? Enter two numbers." << endl <<
         "The first is how much prep time you need and the second is how much cook time you need." << endl <<
         "Both will be in minutes." << endl;
}

/* 
Multipath Adventure Game
For this lab, we want you to create a Multipath Adventure Game.

Decision Tree

Before beginning, create a decision tree for your game. This is worth 10 points on the lab. You need to turn this in on Canvas, 
and it is due before the Main Lab itself is due. See the previous section in zyBooks for more details on the decision tree.

If you need to, you can adjust the decision tree as you are programming. Resubmit the final decision tree with the lab submission quiz.

Note that you are allowed to use concepts we have not covered in class if you would like to (e.g. loops, etc.). 
This might also help you to prepare for future labs.

Your program will need to contain at least 5 decisions/branches with at least 3 end states.

Note that a branch point is where a decision is made, not where you go after making a decision. 
Your program should have 5 branch points (i.e. "forks in the road") where different outcomes may occur depending on the direction chosen at each branch point.
This needs to be 5 branch points in the whole program, not necessarily 5 per path - 
it is possible that an individual path a user might take will have less than 5 decisions before terminating.
As part of grading your lab, the TAs will randomly pick 2 paths through your decision tree to check your work. 
They will reference your submitted decision tree to choose the paths and make sure that when they run your code it takes them through the path as specified in your decision tree.

To make your game easier to play (and thus make it easier for the TAs to grade) you should provide prompts before each input that make clear what inputs are valid.

It is important that your Decision tree is clear and easy to read. This decision tree will serve as the "rubric" to how your code should run and, thus, be graded. 
You will notice that the only autograded points for this lab are that your code compiles and meets the bracing requirements found in the style guide. 
If your code does not follow the Decision tree that you have created, then points will be deducted according to the listed requirements below. 
Again, your tree must be clear and easy to read so that you don't lose points!

Functions

Your program must utilize at least 3 functions outside of main

For the purposes of this requirement, main does not count toward your function total
At least one function (other than main) needs to have at least 2 parameters
Your parameters must be values that are passed in from outside of your function. 
A parameter that passes a value that will be changed on the first line (e.g. using cin to give it a new value) is not a good use of a parameter. 
In this case, it would be better practice to declare a local variable for that value within the function instead of passing in the dummy variable as a parameter.
At least one function (other than main) needs to return a value
Using pass by reference is not returning a value, you must use a return type and the return keyword in your function
Your functions must actually be used within your code. It is great practice to write a function body, 
but it's even better for you to actually use the functions that you have written. Therefore, 
if your functions are not used or serve no purpose (i.e. they do nothing), then you will lose points.

Suggestions for useful functions:
A function to handle printing a prompt and reading user input, returning the value of the user's input. 
Such a function could be easily extended to be even more useful in the next lab. This function would need a string parameter (containing the prompt), 
and possibly another parameter indicating how many options are available (i.e. 3, could indicate that 1, 2, and 3 are valid choices, 
think about what you could do with this information…)
You could implement the various choices or "paths" of your game as functions (i.e. if the user chooses option 'a' which lead them to a dungeon, 
then GoToDungeon() is called, etc.)

Terminating the Program
An end state is defined as the final point in your program after your code has finished running. 
In this state, you are able to observe variables and output given to the user. You must have three unique circumstances for each of your end states. 
Another important part of an end state is that the program has terminated, meaning it is not expecting to receive input or to run any more code. 
If your program is still expecting input at your end states, then your code hasn't actually reached an end state! If your code does this, 
you will lose points for not having a proper end state.

Special Requirements Graded by TAs
You must adhere to the style guidelines. (up to 10 points)
You must have at least 5 decision points in your code (5 points per missing decision point)
You must have at least 3 possible end states for your game (5 points per missing end state)
Your code must correctly follow the paths outlined in your decision tree (15 points per path that does not work correctly)
This includes terminating properly at the end of a path - if you need to end the program early at any point in your code, 
you can use the command exit(0); to end your program at any point
You must use at least 3 functions (other than main) in your code (5 points per missing function)
Your functions must be used within your code
You must use at least 1 function (other than main) that has at least 2 parameters (15 points)
The function must actually make use of the parameters and adhere to the requirement above in the "Functions" section regarding the parameters of your function.
You must use at least 1 function (other than main) that returns a value (15 points)
The return value of the function must actually be used by the caller of the function
Using pass by reference is not returning a value

A Note on Enumerated Variables
It is typically not good practice to have enumerated variable names (e.g. "choice1", "choice2", etc.) 
because you may ultimately add a choice between 1 and 2 that now forces you to change the names of several of your variables. 
There are several ways to fix this, one of which is to have a single input variable. Whichever you choose, 
make sure that you don't enumerate variable or function names in this way. If you do, you will lose points. */
