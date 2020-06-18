#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<int, int> data;
    int n;
    int mx = 0, mx_k;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if (data.find(n) == data.end())
        {    
            data[n] = 1;
        }
        else
        {
            data[n]++;
        }

        if (mx < data[n])
        {
            mx = data[n];
            mx_k = n;
        }
    }

    cout << mx_k << endl;

    return 0;
}