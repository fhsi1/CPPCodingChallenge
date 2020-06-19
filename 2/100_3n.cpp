#include <iostream>
#include <map>

using namespace std;

int main()
{
    int i, j;

    while(cin >> i >> j)
    {
        map<int, int> num_table;
        int n = 0, mx = 0;
        
        cout << i << " " << j << " ";

        if (i > j)
        {
            swap(i, j);
        }

        while (i <= j)
        {
            for (int n = i; n <= j; n++)
            {
                int k = n;
                int cnt = 0;

                while (k != 1)
                {
                    if (k % 2 == 1)
                    {
                        k = 3 * k + 1;
                    }
                    else
                    {
                        k /= 2;
                    }
                    cnt++;
                }
                num_table[n] = cnt + 1;
            }

            for (auto nn : num_table)
            {
                if (nn.second > mx)
                {
                    mx = nn.second;
                }
            }
            cout << mx << endl;
            break;
        }
    }
    return 0;
}