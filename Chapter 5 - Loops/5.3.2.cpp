#include <iostream>
using namespace std;

int main() {
   char keepBidding;
   int nextBid;

   nextBid = 0;
   keepBidding = 'y';

   while (/* Your solution goes here  */keepBidding != 'n') {
      nextBid = nextBid + 3;
      cout << "I'll bid $" << nextBid << "!" << endl;
      cout << "Continue bidding? (y/n) ";
      cin >> keepBidding;
   }
   cout << endl;

   return 0;
}

/* Write an expression that continues to bid until the user enters 'n'. */
