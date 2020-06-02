#include <iostream>
#include <string>
#include <sstream> // string streams

using namespace std;

int main()
{
    string s, p;

    getline(cin, s);
    istringstream sin(s);
    // input string stream, input stream class to operate on strings
    while (sin >> p)
        cout << p[0] << endl;

    return 0;
}