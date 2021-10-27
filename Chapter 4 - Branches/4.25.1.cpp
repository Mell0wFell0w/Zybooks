#include <iostream>
#include <string>
using namespace std;

int main() {

   string input;
cout << "Enter text: " << endl;
getline(cin, input);

cout << "You entered: " << input << endl;

if (input.find("BFF") != string::npos && input.find("IDK") != string::npos)
{
cout << "BFF: best friend forever" << endl;
cout << "IDK: I don't know" << endl;
} 

if (input.find("JK") != string::npos && input.find("TMI") != string::npos && input.find("TTYL") != string::npos)
{
   cout << "JK: just kidding" << endl;
   cout << "TMI: too much information" << endl;
   cout << "TTYL: talk to you later" << endl;
}


   return 0;
}

/* (1) Use getline() to get a line of user input into a string. Output the line. (3 pts) 
Ex:

Enter text: IDK if I'll go. It's my BFF's birthday. 
You entered: IDK if I'll go. It's my BFF's birthday.

(2) Search the string (using find()) for common abbreviations and print a list of each found abbreviation along with its decoded meaning. (3 pts) 
Ex:

Enter text: IDK if I'll go. It's my BFF's birthday. 
You entered: IDK if I'll go. It's my BFF's birthday. 
BFF: best friend forever
IDK: I don't know
Support these abbreviations:

BFF -- best friend forever
IDK -- I don't know
JK -- just kidding
TMI -- too much information
TTYL -- talk to you later */
