#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, mx;

    cin >> a;
    mx = a;
    
    for (int i = 1; i < 3; i++)
    {
        cin >> a;
        mx = max(mx, a);
    }

    cout << mx << endl;

    return 0;
}