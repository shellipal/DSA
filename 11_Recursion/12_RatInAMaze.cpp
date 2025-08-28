#include <iostream>
#include <vector>
using namespace std;

void pathHelper(vector<vector<int>> &maze, int r, int c, string path, vector<string> &ans)
{
    int n = maze.size();
    if (r < 0 || c < 0 || r >= n || c >= n || maze[r][c] == 0 || maze[r][c] == -1)
    {
        return;
    }

    // we get ans....
    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(path);
        return;
    }

    maze[r][c] = -1;

    // down....
    pathHelper(maze, r + 1, c, path + "D", ans);
    // up....
    pathHelper(maze, r - 1, c, path + "U", ans);
    // left....
    pathHelper(maze, r, c - 1, path + "L", ans);
    // right....
    pathHelper(maze, r, c + 1, path + "R", ans);

    maze[r][c] = 1;
}

vector<string> findPath(vector<vector<int>> &maze)
{
    int n = maze.size();
    vector<string> ans;
    string path = "";

    pathHelper(maze, 0, 0, path, ans);
    return ans;
}

int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> ans = findPath(maze);
    for (string path : ans)
    {
        cout << path << endl;
    }
    // cout << endl;
    return 0;
}