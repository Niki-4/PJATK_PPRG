#include <iostream>

#include <vector>

 

using namespace std;

 

int main() {

    int rows, cols;

 

    cout << "Enter the number of rows: ";

    cin >> rows;

    cout << "Enter the number of columns: ";

    cin >> cols;

 

//create matrixes

    vector<vector<int>> matrix(rows, vector<int>(cols));

    vector<vector<int>> reversed_matrix(rows, vector<int>());

 

//fill matrix

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < cols; j++) {

                cout << "Enter the value: ";

            cin >> matrix[i][j];

        }

    }

//print matrix

    cout << "Matrix: " << endl;

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < cols; j++) {

            cout << matrix[i][j] << ' ';

        }

        cout << endl;

    }

//reverse matrix

    for(int i = 0; i < rows; i++) {

        for(int j = cols - 1; j >= 0; j--) {

            reversed_matrix[i].push_back(matrix[i][j]);

        }

        cout << endl;

    }

   

//print reversed matrix

    cout << "Reversed Matrix: " << endl;

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < cols; j++) {

            cout << reversed_matrix[i][j] << ' ';

        }

        cout << endl;

    }

 

    return 0;

}