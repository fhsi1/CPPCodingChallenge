#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(0);
    int n;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        a.insert(a.begin() + i, n);
    }

    cout << a[0] + a[1] << " ";

    for (int j = 1; j < 9; j++)
    {
        cout << a[j - 1] + a[j] + a[j + 1] << " ";
    }

    cout << a[8] +a[9] << endl;

    return 0;
}