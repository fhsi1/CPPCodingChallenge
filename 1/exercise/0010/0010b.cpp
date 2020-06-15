#include <iostream>

using namespace std;

int main()
{
    int a;
    int min = 100;
    int second_min = 100;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;

        if (min > a)
        {
            min = a;
        }

        if (a > min && a < second_min)
        {
            second_min = a;
        }
    }

    cout << second_min << endl;

    return 0;
}
