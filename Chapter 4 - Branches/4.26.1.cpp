#include <iostream>
#include <string>
using namespace std;

int main() {

   string text;
   int textPosition;
   
   cout << "Enter text: ";
   getline(cin, text);
   cout << endl;
   cout << "You entered: " << text << endl;
   
   if (text.find ("BFF") != string::npos) {
      textPosition = text.find("BFF");
      text.replace(textPosition, 3, "best friend forever");
      }
   if (text.find ("IDK") != string::npos) {
      textPosition = text.find("IDK");
      text.replace(textPosition, 3, "I don't know");
      }
   if (text.find ("JK") != string::npos) {
      textPosition = text.find("JK");
      text.replace(textPosition, 2, "just kidding");
      }
   if (text.find ("TMI") != string::npos) {
      textPosition = text.find("TMI");
      text.replace(textPosition, 3, "too much information");
      }   
   if (text.find ("TTYL") != string::npos) {
      textPosition = text.find("TTYL");
      text.replace(textPosition, 4, "talk to you later");
      }
      cout << "Expanded: " << text << endl;

   return 0;
}

/* (1) Get a line of text from the user. Output that line. (1 pt) 
Ex:
Enter text: IDK how that happened. TTYL. 
You entered: IDK how that happened. TTYL.

(2) Output the line again, this time expanding common text message abbreviations. (5 pts) 
Ex:
Enter text: IDK how that happened. TTYL. 
You entered: IDK how that happened. TTYL.
Expanded: I don't know how that happened. talk to you later.
Support these abbreviations:

BFF -- best friend forever
IDK -- I don't know
JK -- just kidding
TMI -- too much information
TTYL -- talk to you later
Note: If an abbreviation appears twice, only expand its first instance. */
