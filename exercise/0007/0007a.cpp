#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cin >> n;
    for (i = n; i > 0; i--)
    {
        for (j = i; j > 0; j--) // first run
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}