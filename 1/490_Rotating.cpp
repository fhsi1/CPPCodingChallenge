#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector<string> ss;
    int max_len = 0;
    int len;

    while (1)
    {
        getline(cin, s);
        if (cin.eof())
        {
            break;
        }
        len = s.length();
        ss.push_back(s);
        if (max_len < len)
        {
            max_len = len;
        }
    }

    int last = ss.size() - 1;
    for (int i = 0; i < max_len; i++)
    {
        for (int j = last; j >= 0; j--)
        {
            if (ss[j].length() > i)
            {
                cout << ss[i][j];
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}