#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int row, col, x;
    cin >> row;

    vector<vector<int>> a(row);

    for (auto &aa : a)
    {
        cin >> col;

        while (col--)
        {
            cin >> x;
            aa.push_back(x);
        }
    }

    for (auto aa : a)
    {
        cout << accumulate(aa.begin(), aa.end(), 0) << endl;
        /* accumulate : accumulate values in range.
            first, last, init */
    }

    return 0;
}