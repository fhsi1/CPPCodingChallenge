#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str, x;
    int cnt(0);

    while (1)
    {
        getline(cin, str);
        if (cin.eof())
        {
            break;
        }
        for (auto c : str)
        {
            if (isdigit(c))
            {
                cnt += int(c - '0');
            }
            else
            {
                if (c == '!')
                {
                    x = "\n";
                }
                else if (c == 'b')
                {
                    x = string(cnt, ' ');
                }
                else
                {
                    x = string(cnt, c);
                }
                cout << x;
                cnt = 0;
            }
        }
        cout << endl;
    }
    return 0;
}