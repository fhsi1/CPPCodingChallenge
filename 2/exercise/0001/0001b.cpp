#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, mn;

    cin >> a;

    mn = a;

    for (int i = 1; i < 10; i++)
    {
        cin >> a;
        mn = min(mn, a);
    }

    cout << mn << endl;

    return 0;
}