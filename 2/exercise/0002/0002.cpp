#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, mx, mn;
    int avg = 0;

    cin >> a;
    mx = mn = a;

    for (int i = 1; i < 10; i++)
    {
        cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
    }

    avg = (mx + mn) / 2;

    cout << avg << endl;
    
    return 0;
}