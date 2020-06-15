#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    while (1)
    {
        cin >> n; // row

        if (n == 0)
            break; // if row = 0, break

        int total = 0; // total empty
        int count;     // count of empty
        int min_count = 23;
        string s; // image data

        cin.get(); // remove '\n' in buffer
        for (int i = 0; i < n; i++)
        {
            getline(cin, s);
            count = 0;
            for (auto c : s)
                if (c == ' ')
                    count++; // count of empty

            total += count; // total empty

            if (min_count > count)
                min_count = count; // possible move counts
        }

        cout << total - min_count * n << endl;
    }

    return 0;
}