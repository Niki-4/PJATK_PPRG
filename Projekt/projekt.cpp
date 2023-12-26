#include <iostream>
#include <vector>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

int main() {
    srand(time(0)); // seed for random number generator

    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> table(rows, vector<int>(cols));

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            table[i][j] = rand() % 100; // random numbers between 0 and 99
        }
    }

    // print the table
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
