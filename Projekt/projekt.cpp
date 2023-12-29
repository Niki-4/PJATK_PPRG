#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main() {
    
    srand(time(0));
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // create table for random numbers
    vector<vector<int>> table(rows, vector<int>(cols));

    // fill table with random numbers between 1 and 100
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            table[i][j] = rand() % 100; 
        }
    }

    // print the table
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    
    // vector containing possible ways through table
    vector<vector<int>> ways(0, vector<int>(cols)); 
    
    //fill ways vector with one rows ways
    for(int i = 0; i < rows; i++) {
        ways.push_back(vector<int>());
        for(int j = 0; j < cols; j++) {
            ways[i].push_back(table[i][j]);
        }
    }
    
    // print the ways
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << ways[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
