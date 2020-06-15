#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    vector<char> a(20, 'a');

    cin >> num;

    a.erase(a.begin() + num);
    a.insert(a.begin() + num, 'b');

    for (auto aa : a)
    {
        cout << aa;
    }

    return 0;
}