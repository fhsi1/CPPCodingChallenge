#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int row, col;
    int i, j, ii, jj;

    while(cin >> row >> col)
    {
        vector<string> mine(row);
        vector<vector<int>> board;

        for (i = 0; i < row; i++)
        {
            cin >> mine[i];
            board.push_back(vector<int>(col, 0));
        }

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (mine[i][j] != '*')
                {
                    continue;
                }

                for (ii = max(0, i - 1); ii <= min(row - 1, i + 1); ii++)
                {
                    for (jj = max(0, j - 1); jj <= min(col - 1, j + 1); jj++)
                    {
                        board[ii][jj]++;
                    }
                }
            }
        }

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (mine[i][j] == '*')
                {
                    cout << 0;
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