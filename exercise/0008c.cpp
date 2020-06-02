#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        t = s.substr(1) + s[0]; //generate substring, remove (1)st letter
        cout << t << endl;
        s = t;
    }
    return 0;
}