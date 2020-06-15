#include <iostream>

using namespace std;

int main()
{
    int n, t, sum, a, b, c;

    cin >> t; // number of test case
    while (t--)
    {
        sum = 0;

        cin >> n; // number of case
        while (n--)
        {
            cin >> a >> b >> c; // size, livestock, grade
            sum += a * c;
        }
        cout << sum << endl;
    }

    return 0;
}