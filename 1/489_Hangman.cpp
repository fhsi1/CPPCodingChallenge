#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    string a, b;

    while(1)
    {
        cin >> n;

        if (n == -1)
        {
            break;
        }
        cout << "Round " << n << endl;
        cin >> a >> b;
        set<char> sa(a.begin(), a.end());
        int count(0);
        for (auto cb : b)
        {
            if (sa.find(cb) != sa.end())
            {
                sa.erase(cb);
            }
            else
            {
                count++;
            }
            if (count > 6 || sa.empty())
            {
                break;
            }
            if (sa.empty())
            {
                cout << "You win." << endl;
            }
            else if (count > 6)
            {
                cout << "You lose." << endl;
            }
            else
            {
                cout << "You chickend out." << endl;
            }
        }
    }
    return 0;
}