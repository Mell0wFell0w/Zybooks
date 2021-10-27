#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

   string text;     
   cout << "Input an abbreviation: " << endl;   
   getline (cin,text); 
   if (text.find("LOL") == 0) {    
      cout << "laughing out loud" << endl;  
      }   
      else if (text.find("IDK") == 0) {     
      cout << "I don't know" << endl;  
      }  
      else if (text.find ("BFF") == 0) {     
      cout << "best friends forever" << endl;  
      }  
      else if (text.find ("IMHO") == 0) {     
      cout << "in my humble opinion" << endl;  
      }  
      else if (text.find ("TMI") == 0) {     
         cout << "too much information" << endl;  
      }  else {     
         cout << "Unknown" << endl;  
      
      }   
      
   return 0;
}

/* (1) If a user's input string matches a known text message abbreviation, output the unabbreviated form, else output: Unknown. 
Support two abbreviations: LOL -- laughing out loud, and IDK -- I don't know. (3 pts) 

Sample input/output:
Input an abbreviation: LOL
laughing out loud

(2) Expand to also decode these abbreviations. (4 pts)
BFF -- best friends forever
IMHO -- in my humble opinion
TMI -- too much information */
