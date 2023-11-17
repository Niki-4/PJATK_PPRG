// stworzone z pomocą chatGPT. Niemniej, rozumiem swój kod i w razie potrzeby jestem w stanie go wytłumaczyć
#include <iostream>

#include <vector>

 

using namespace std;

 

int main() {

    int x;

    cout << "Enter a number: ";

    cin >> x;

 

    // Create a vector of vectors to hold the rows of Pascal's Triangle

    vector<vector<int>> pascal(x);

 

    // The first row is always [1]

    pascal[0] = vector<int>(1, 1);

 

    for (int i = 1; i < x; ++i) {

        // Each row has one more element than the previous row

        pascal[i] = vector<int>(i+1);

 

        // The first and last elements of each row are always 1

        pascal[i][0] = pascal[i][i] = 1;

 

        // Each interior element is the sum of the two elements above it

        for (int j = 1; j < i; ++j) {

            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];

        }

    }

 

    // Print Pascal's Triangle

    for (const auto& row : pascal) {

        for (int num : row) {

            cout << num << ' ';

        }

        cout << '\n';

    }

 

    return 0;

}
