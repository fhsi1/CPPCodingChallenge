#include <iostream>

using namespace std;

int main()
{
    int num, a, hz = 0;

    
    cin >> num >> a >> hz;

    while(hz--)
    {
        for (int i = 1; i <= a; i++)
        {
           for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
           cout << endl;
        }

        for (int k = a; k > 0; k--)
        {
            for (int l = k; l > 0; l--)
            {
                cout << k;
            }
            cout << endl;
        }
        cout << endl;
    }
    

    return 0;
}