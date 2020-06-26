#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    int i, j, ii, jj;
    int f(1);

    while (cin >> n >> m)
    {
        if (n == 0)
        {
            break;
        }

        if (f > 1)
        {
            cout << endl;
        }

        cout << "Field #" << f++ << ":" << endl;

        vector<string> mine(n);
        vector<vector<int>> board;

        for (i = 0; i < n; i++)
        {
            cin >> mine[i];
            board.push_back(vector<int>(m, 0));
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (mine[i][j] != '*')
                {
                    continue;
                }

                for (ii = max(0, i - 1); ii <= min(n - 1, i + 1); ii++)
                {
                    for (jj = max(0, j - 1); jj <= min(m - 1, j + 1); jj++)
                    {
                        board[ii][jj]++;
                    }
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (mine[i][j] == '*')
                {
                    cout << "*";
                }
                else
                {
                    cout << board[i][j];
                }
            }
            cout << endl;
        }
    }

    return 0;
}