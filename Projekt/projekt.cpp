#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 
#include <utility>
#include <climits>

using namespace std;

// Forward declaration of get_next_positions
vector<pair<int, int>> get_next_positions(pair<int, int> position, vector<vector<int>>& matrix);

vector<vector<int>> findAllPaths(vector<vector<int>>& matrix, pair<int, int> position, vector<int> path) {
    // Add the current position to the path
    path.push_back(matrix[position.first][position.second]);

    // If the current position is at the rightmost column, return the path
    if (position.second == matrix[0].size() - 1) {
        return vector<vector<int>>{path};
    }

    // Initialize the list of all paths
    vector<vector<int>> all_paths;

    // Get the possible next positions (right, up, down)
    vector<pair<int, int>> next_positions = get_next_positions(position, matrix);

    // For each next position
    for (pair<int, int> next_position : next_positions) {
        // Recursively find all paths from the next position
        vector<int> new_path(path);
        vector<vector<int>> paths_from_next_position = findAllPaths(matrix, next_position, new_path);

        // Add the paths from the next position to the list of all paths
        all_paths.insert(all_paths.end(), paths_from_next_position.begin(), paths_from_next_position.end());
    }

    return all_paths;
}

// Definition of get_next_positions
vector<pair<int, int>> get_next_positions(pair<int, int> position, vector<vector<int>>& matrix) {
    // Get the row and column indices
    int row = position.first, col = position.second;

    // Initialize the list of next positions with the position to the right
    vector<pair<int, int>> next_positions = {make_pair(row, col + 1)};

    // If it's possible to move up, add the position diagonally up-right to the list
    if (row > 0) {
        next_positions.push_back(make_pair(row - 1, col + 1));
    }

    // If it's possible to move down, add the position diagonally down-right to the list
    if (row < matrix.size() - 1) {
        next_positions.push_back(make_pair(row + 1, col + 1));
    }

    return next_positions;
}

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

    cout << "Table of random numbers:" << endl;
    // print the table
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    // Call findAllPaths for each cell in the first column of the matrix
    vector<vector<int>> all_paths;
    for(int i = 0; i < rows; i++) {
        vector<vector<int>> paths_from_cell = findAllPaths(table, make_pair(i, 0), {});
        all_paths.insert(all_paths.end(), paths_from_cell.begin(), paths_from_cell.end());
    }

    cout << "All paths:" << endl;
    // Print all paths
    for(const auto& path : all_paths) {
        for(int num : path) {
            cout << num << " ";
        }
        cout << endl;
    }
    
        // Initialize the minimum sum and the path with the minimum sum
    int min_sum = INT_MAX;
    vector<int> min_path;

    // Iterate over all paths
    for (vector<int>& path : all_paths) {
        // Calculate the sum of the current path
        int sum = 0;
        for (int num : path) {
            sum += num;
        }

        // If the sum of the current path is less than the minimum sum, update the minimum sum and the path
        if (sum < min_sum) {
            min_sum = sum;
            min_path = path;
        }
    }

    cout << "The path with the smallest sum is: ";
    for (int num : min_path) {
        cout << num << " ";
    }
    cout << "\nThe smallest sum is: " << min_sum << endl;

    return 0;
}
