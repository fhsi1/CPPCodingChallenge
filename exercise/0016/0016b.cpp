#include <iostream>


using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cout << n << endl;
        }

        if ((n % 2 != 0) && (n != 1))
        {
            n += 1;
            cout << n << endl;
        }

        if (n == 1)
        {
            break;
        }
        
    }
    return 0;
}