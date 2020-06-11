#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (auto ss : s)
    {
        if (ss == 'A')
        {
            cout << '1';
        }
        else if (ss == 'B')
        {
            cout << '2';
        }
        else if (ss == 'C')
        {
            cout << '3';
        }
        else
        {
            cout << ss;
        }
    }

    cout << endl;

    return 0;
}