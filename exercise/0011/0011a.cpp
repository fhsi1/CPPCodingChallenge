#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> a(10);
    for (auto &aa : a)
    {
        cin >> aa;
    }
    cout << accumulate(a.begin(), a.end(), 0) << endl;

    return 0;
}