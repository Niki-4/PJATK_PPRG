// stworzone z pomocą chatGPT. Niemniej, rozumiem swój kod i jestem w stanie go wytłumaczyć
#include <iostream>
using namespace std;

int main () {
  int table[10][10];

  // Fill the table
  for (int i = 0; i < 10; i++) {
    table[i][0] = i;  // numbers from 0 to 9
    table[i][1] = i * 2;  // first column cell * 2
    table[i][2] = i * i;  // first column cell * first column cell
    table[i][3] = i + 4;  // sum of number of current row and number of current column
    table[i][4] = i - 5;  // difference of number of current row and number of current column
    for (int j = 5; j < 10; j++) {
      table[i][j] = 0;  // rest of columns to 0
    }
  }

  // Print the table
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cout << table[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
