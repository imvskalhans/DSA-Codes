//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
   // const int N = 9; // Assuming Sudoku is a 9x9 grid

// Function to check if the given number can be placed at the specified position.
bool isSafe(int grid[N][N], int row, int col, int num)
{
    // Check row and column
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num || grid[i][col] == num)
            return false;
    }

    // Check the 3x3 grid containing the cell (row, col)
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

// Function to find an empty cell in the Sudoku grid.
// Returns true if there is an empty cell, otherwise false.
bool findEmptyCell(int grid[N][N], int& row, int& col)
{
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0)
                return true;
        }
    }
    return false;
}
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
           int row, col;

    // Check if there is any empty cell
    if (!findEmptyCell(grid, row, col))
        return true; // All cells are filled, Sudoku solved

    // Try filling numbers from 1 to 9 in the current empty cell
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            // If the number is safe to be placed, assign it to the cell
            grid[row][col] = num;

            // Recursively try to solve the remaining Sudoku
            if (SolveSudoku(grid))
                return true; // If solved, return true

            // If the current placement doesn't lead to a solution,
            // backtrack and try the next number
            grid[row][col] = 0;
        }
    }

    return false; // If no number can be placed, trigger backtracking
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
            for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] <<" ";
        }
        //cout << endl;
    }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends