#include <iostream>
#include <vector>

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
        for (auto aaa : aa)
        {
            cout << aaa << " ";
        }
        cout << endl;
    }

    return 0;
}