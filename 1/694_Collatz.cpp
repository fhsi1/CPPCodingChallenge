#include <iostream>

using namespace std;

int main()
{
    int limit, case_num(1), cnt;
    long long a;

    while(1)
    {
        cin >> a >> limit;
        if (a < 0)
        {
            break;
        }

        cout << "Case " << case_num++ << ": A = " << a;
        cout << ", limit = " << limit << ", number of terms = ";

        cnt = 1;
        while(a != 1)
        {
            if (a % 2 == 1)
            {
                a = a * 3 + 1;
            }
            else
            {
                a /= 2;
            }
            if (a > limit)
            {
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}