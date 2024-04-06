#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 9;

// Function to print the Sudoku grid
void printGrid(const vector<vector<int>>& grid) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            cout << grid[row][col] << " ";
        }
        cout << "\n";
    }
}

// Function to check if it's safe to place a number at the given row, col
bool isSafe(const vector<vector<int>>& grid, int row, int col, int num) {
    // Check row
    for (int x = 0; x < SIZE; x++) {
        if (grid[row][x] == num) {
            return false;
        }
    }

    // Check column
    for (int x = 0; x < SIZE; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Main function to solve the Sudoku
bool solveSudoku(vector<vector<int>>& grid) {
    int row, col;
    bool isEmpty = true;
    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            if (grid[row][col] == 0) {
                isEmpty = false;
                break;
            }
        }
        if (!isEmpty) {
            break;
        }
    }

    // No empty space left
    if (isEmpty) {
        return true;
    }

    // Else for each-row backtrack
    for (int num = 1; num <= SIZE; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid)) {
                return true;
            }
            grid[row][col] = 0; // Replace it
        }
    }
    return false;
}

int main() {
    vector<vector<int>> grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(grid)) {
        printGrid(grid);
    } else {
        cout << "No solution exists";
    }

    return 0;
}
