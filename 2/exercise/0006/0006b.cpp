#include <iostream>
#include <vector>

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
    for (y = 0; y < col; y++)
    {
        for (x = 0; x < row; x++)
        {
            if (a[y][x] == '*')
            {
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout << endl;
    }
    return 0;
}