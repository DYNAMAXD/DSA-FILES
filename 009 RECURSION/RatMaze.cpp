#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//https://chatgpt.com/share/685e48ac-975c-8010-85e0-f7a1a118dc88
//chat gpt help here
//written the dsolve code fully by myself


void dsolve(vector<vector<int>>& maze , vector<string>& ans , vector<vector<int>>& visited , int r , int c , string move)
{
    int nextr , nextc;
    int maxr = maze.size();
    int maxc = maze[0].size();

    if( r >= maxr || c >= maxc ||r < 0 || c < 0||maze[r][c] == 0 || visited[r][c] == 1 )
    {
        move.pop_back();
        return;
    }

    visited[r][c] = 1;

    if(r == maxr-1 && c == maxc-1)
    {
        ans.push_back(move);
        //return;
    }

    //move left
    nextr = r;
    nextc = c-1;
    dsolve(maze , ans , visited , nextr , nextc , move + "L");
    //move right
    nextr = r;
    nextc = c+1;
    dsolve(maze , ans , visited , nextr , nextc , move + "R");
    //move up
    nextr = r-1;
    nextc = c;
    dsolve(maze , ans , visited , nextr , nextc , move + "U");
    //move down
    nextr = r+1;
    nextc = c;
    dsolve(maze , ans , visited , nextr , nextc , move + "D");
    visited[r][c] = 0;
    return;
}


vector<string> ratInMaze(vector<vector<int>>& maze) {
    vector<string> ans;
    int n = maze.size();
    if (maze[0][0] == 0) return ans;

    vector<vector<int>> visited(n, vector<int>(n, 0));
    dsolve(maze, ans, visited, 0, 0, "");
    return ans;
}


void printPaths(vector<string>& paths) {
    if (paths.empty()) {
        cout << "No paths found." << endl;
    } else {
        for (string& p : paths) {
            cout << p << endl;
        }
    }
    cout << "----------------------" << endl;
}

int main() {
    // Test Case 1: Fully open 5x5 maze
    vector<vector<int>> maze1(5, vector<int>(5, 1));
    vector<string> paths1 = ratInMaze(maze1);
    cout << "Test Case 1: Fully open 5x5 maze" << endl;
    printPaths(paths1);

    // Test Case 2: Diagonal blocks
    vector<vector<int>> maze2(5, vector<int>(5, 1));
    for (int i = 0; i < 5; i++) maze2[i][i] = 0;
    maze2[0][0] = 1; maze2[4][4] = 1;
    vector<string> paths2 = ratInMaze(maze2);
    cout << "Test Case 2: Diagonal blocked maze" << endl;
    printPaths(paths2);

    // Test Case 3: Only leftmost column is open
    vector<vector<int>> maze3(5, vector<int>(5, 0));
    for (int i = 0; i < 5; i++) maze3[i][0] = 1;
    maze3[4][4] = 1;
    vector<string> paths3 = ratInMaze(maze3);
    cout << "Test Case 3: Narrow vertical path" << endl;
    printPaths(paths3);

    // Test Case 4: Complex blocks
    vector<vector<int>> maze4 = {
        {1, 1, 0, 1, 1},
        {1, 0, 1, 0, 1},
        {1, 1, 1, 1, 0},
        {0, 0, 0, 1, 1},
        {1, 1, 1, 0, 1}
    };
    vector<string> paths4 = ratInMaze(maze4);
    cout << "Test Case 4: Complex blocked maze" << endl;
    printPaths(paths4);

    // Test Case 5: No path
    vector<vector<int>> maze5(5, vector<int>(5, 0));
    maze5[0][0] = 1;
    maze5[4][4] = 1;
    vector<string> paths5 = ratInMaze(maze5);
    cout << "Test Case 5: No possible path" << endl;
    printPaths(paths5);

    return 0;
}
