#include <iostream>

using namespace std;

int main()
{   
    int n;
    int count = 0;
    cin >> n;

     while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            count++;
        }

        if ((n % 2 != 0) && (n != 1))
        {
            n += 1;
            count++;
        }
        if (n == 1)
        {
            cout << count << endl;
            break;
        }
        
    }

    return 0;
}