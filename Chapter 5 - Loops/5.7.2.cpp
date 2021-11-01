#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   cin >> numRows;
   cin >> numColumns;

   /* Your solution goes here  */
   int rowNum = 1;

	for(int i = 0; i < numRows; i++){
		char seat = 'A';	//needs to be outside numCols loop but inside numRows loop

		for(int j = 0; j < numColumns; j++){
			cout << rowNum << seat << " ";
			seat++;
		}
		rowNum ++;
	}

   cout << endl;

   return 0;
}

/* Given numRows and numColumns, print a list of all seats in a theater. Rows are numbered, columns lettered, as in 1A or 3E. Print a space after each seat, 
including after the last. Ex: numRows = 2 and numColumns = 3 prints:
1A 1B 1C 2A 2B 2C  */
