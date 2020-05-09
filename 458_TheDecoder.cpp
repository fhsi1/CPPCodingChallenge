#include <iostream>
#include <string>

using namespace std;

int main()
{
    int d = '*' - '1'; // ASCII '*', '1' : * = 42, 1 = 49, int d = -7
    string s;
    while (1)
    {
        getline(cin, s);
        if (cin.eof())
            break;
        for (auto c : s)
            cout << char(c + d); // each c element + d, c - 7
        cout << endl;
    }

    return 0;
}