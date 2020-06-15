#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> pas = {1};
    vector<int> sub;
    int n;

    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        sub.push_back(1);
        for (int j = 1; j < pas.size(); j++)
        {
            sub.push_back(pas[j - 1] + pas[j]);
        }
        sub.push_back(1);
        pas = sub;
        sub.clear();
    }

    for (auto p : pas)
    {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}