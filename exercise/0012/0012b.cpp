#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string s;
    string num = "";
    cin >> s;

    for (auto ss : s)
    {
        if (isdigit(ss))
        {
            num += ss;
        }
        else if (!num.empty())
        {
            cout << num << endl;
            num = "";
        }
    }
    if (!num.empty())
    {
        cout << num << endl;
    }
    return 0;
}