#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, mx, mn;
    int sum = 0;

    cin >> a;
    mx = mn = a;

    for (int i = 1; i < 10; i++)
    {
        cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
    }

    sum = mx + mn;

    cout << sum << endl;

    return 0;
}