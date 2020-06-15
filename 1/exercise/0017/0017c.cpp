#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << a[0] + a[1] << " ";

    for (int j = 1; j < 9; j++)
    {
        cout << a[j - 1] + a[j] + a[j + 1] << " ";
    }

    cout << a[8] + a[9] << endl;

    return 0;
}