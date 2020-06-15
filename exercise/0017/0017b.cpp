#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a[10] = {0, 1, 2, 3, 2, 1, 0, 1, 2, 3};
    int n, x;

    cin >> n;

    while(n--)
    {
        cin >> x;
        cout << a[x] << " ";
    }
    cout << endl;

    return 0;
}