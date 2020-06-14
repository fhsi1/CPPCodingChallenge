#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;

    getline(cin, s); // include empty
    for (auto s : s)
    {
        if (isupper(s))
        {
            cout << s;
        }
    }

    cout << endl;

    return 0;
}