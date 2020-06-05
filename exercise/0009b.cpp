#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (auto s : s)
    {
        if (isupper(s))
        {
            cout << char(s + 32);
            // ASCII 'A' = 65, 'a' = 97, 32 = 97 - 65
        }
        else if (islower(s))
        {
            cout << char(s - 32);
        }
        else
        {
            cout << s;
        }
    }

    cout << endl;

    return 0;
}