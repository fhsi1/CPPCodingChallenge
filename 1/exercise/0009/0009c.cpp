#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str, istr;

    getline(cin, str);
    for (auto s : str)
    {
        if (isdigit(s))
        {
            istr += s;
        }
    }
    cout << atoi(istr.c_str()) + 10 << endl;

    return 0;
}