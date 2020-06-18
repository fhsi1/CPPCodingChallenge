#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<char, int> santanse;
    string s;
    getline(cin, s);

    for (auto ss : s)
    {
        if (santanse.find(ss) == santanse.end())
        {
            santanse[ss] = 1;
        }
        else
        {
            santanse[ss]++;
        }
    }
        for (auto sa : santanse)
        {
            cout << sa.first << " = " << sa.second << endl;
        }
    return 0;
}