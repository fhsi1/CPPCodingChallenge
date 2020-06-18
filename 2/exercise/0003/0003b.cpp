#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    map<int, int> inti;
    int num, counts;
    int mx = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> num;

        if (inti.find(num) == inti.end())
        {
            inti[num] = 1;
        }
        else
        {
            inti[num]++;
        }

        if (mx < inti[num])
        {
            mx = inti[num];
            counts = num;
        }
    }

    cout << counts << endl;
}