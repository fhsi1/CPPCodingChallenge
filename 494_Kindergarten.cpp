#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    while (1)
    {
        string s = "meep meep!";
        if (cin.eof())
            break;
        int I = 0; // count of words. not index.
        char p = -1;
        for (auto c : s)
        {
            if (isalpha(c) && (p == -1 || !isalpha(p)))
                I++;
            p = c;
        }
        cout << I << endl;
    }
    return 0;
}