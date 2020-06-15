#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a({0, 1, 2, 3, 2, 1, 0, 1, 2, 3});

    int n, order_n;
    cin >> n;

    vector<int> order(n);

    for (int i = 0; i < n; i++)
    {
        cin >> order_n;
        order.insert(order.begin() + i, order_n);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[order[i]] << " ";
    }

    return 0;
}