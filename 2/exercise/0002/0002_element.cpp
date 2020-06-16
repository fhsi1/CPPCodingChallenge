#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(10);
    int mx, mn, avg;

    for (auto &aa : a)
    {
        cin >> aa;
    }

    mx = *min_element(a.begin(), a.end());
    mn = *max_element(a.begin(),a.end());
    avg = (mx + mn) / 2;

    cout << avg << endl;

    return 0;
}