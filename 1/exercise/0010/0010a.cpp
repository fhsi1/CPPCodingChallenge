#include <iostream>

using namespace std;

int main()
{
    int a;
    int max = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;

        if (max < a)
        {
            max = a;
        }
    }

    cout << max << endl;

    return 0;
}
