#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cin >> n;

    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= n; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << j;
        }
        for (j = n - 1; j > 0; j--)
        {
            if (j < i)
                cout << " ";
            else
                cout << j;
        }
        cout << endl;
    }
    return 0;
}