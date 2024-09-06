#include <iostream>
using namespace std;

#define N 4

bool isSafe(int maze[N][N], int x, int y) {
    // Check if (x, y) is within the maze and is not blocked
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}

bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]) {
    // If (x, y) is the destination, maze is solved
    if (x == N - 1 && y == N - 1) {
        sol[x][y] = 1;
        return true;
    }

    // Check if maze[x][y] is a valid move
    if (isSafe(maze, x, y)) {
        // Mark x, y as part of the solution path
        sol[x][y] = 1;

        // Move forward in the x direction
        if (solveMazeUtil(maze, x + 1, y, sol))
            return true;

        // If moving in x direction doesn't give solution, move down in y direction
        if (solveMazeUtil(maze, x, y + 1, sol))
            return true;

        // If none of the above movements work, BACKTRACK: unmark x, y as part of solution path
        sol[x][y] = 0;
        return false;
    }

    return false;
}

bool solveMaze(int maze[N][N]) {
    int sol[N][N] = { {0, 0, 0, 0},
                      {0, 0, 0, 0},
                      {0, 0, 0, 0},
                      {0, 0, 0, 0} };

    if (!solveMazeUtil(maze, 0, 0, sol)) {
        cout << "No solution found" << endl;
        return false;
    }

    cout << "Solution Path:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }

    return true;
}

int main() {
    int maze[N][N] = { {1, 0, 0, 0},
                       {1, 1, 0, 1},
                       {0, 1, 0, 0},
                       {1, 1, 1, 1} };

    solveMaze(maze);

    return 0;
}
