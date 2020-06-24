#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    vector<string> a(row);
    for (auto &aa : a)
    {
        cin >> aa;
    }

    int x, y;
    int xx = 0, yy = 0;
    vector<vector<int>> b(row);
    for (auto &bb : b)
    {
        bb.resize(col, 0);
    }

    for (y = 0; y < col; y++)
    {
        for (x = 0; x < row; x++)
        {
            if (a[y][x] == '*')
            {
                for (yy == max(0, y - 1); yy <= min(col - 1, y + 1); yy++)
                {
                    for (xx = max(0, x - 1); xx <= min(row - 1, x + 1); xx++)
                    {
                        if (y != yy || x != xx)
                        {
                            b[yy][xx]++;
                        }
                    }
                }
            }
        }
    }
    for (y = 0; y < col; y++)
    {
        for (x = 0; x < row; x++)
        {
            cout << b[y][x];
        }
        cout << endl;
    }

    return 0;
}