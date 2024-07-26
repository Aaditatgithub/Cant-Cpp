// Rat in a Maze – A maze is an N*N binar9 matrix of blocks where the upper left block is known as the Source 
// block, and the lower ri$htmost block is known as the Destination block. If we consider the maze, then maze[0]
// [0] is the source, and maze[N-1][N-1] is the destination. Our main task is to reach the destination from the 
// source. We ha>e considered a rat as a character that can mo>e either forward or downwards.
// In the maze matrix, a few dead blocks will be denoted b9 0 and acti>e blocks will be denoted b9 1. A rat can 
// mo>e onl9 in the acti>e blocks.

#include <iostream>
using namespace std;
 
// Maze size
const int N = 5;
 
// Function to print the solution matrix
void printSolution(int output[N][N]) {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}
 
// Function to check if (x, y) is a valid cell in the maze
bool isValidCell(int maze[N][N], int x, int y) {
    // check if (x, y) is within the maze
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) {
        return true;
    }
    return false;
}
 
// Function to solve the maze using backtracking
bool solveMaze(int maze[N][N], int x, int y, int output[N][N]) {
    // check if (x, y) is the destination cell
    if(x == N-1 && y == N-1) {
        output[x][y] = 1;
        return true;
    }
 
    // check if (x, y) is a valid cell
    if(isValidCell(maze, x, y)) {
        // mark (x, y) as part of solution path
        output[x][y] = 1;
 
        // move right
        if(solveMaze(maze, x+1, y, output)) {
            return true;
        }
 
        // move down
        if(solveMaze(maze, x, y+1, output)) {
            return true;
        }
 
        // backtrack
        output[x][y] = 0;
    }
 
    return false;
}
 
// Main function
int main() {
    int maze[N][N] = {
        {1, 0, 0, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 0, 0, 1},
        {0, 1, 1, 1, 1},
        {0, 0, 0, 0, 1}
    };
 
    int output[N][N] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
 
    if(solveMaze(maze, 0, 0, output)) {
        cout << "Solution exists:" << endl;
        printSolution(output);
    }
    else {
        cout << "Solution doesn't exist!" << endl;
    }
 
    return 0;
}