#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int a;
    int min = std::numeric_limits<int>::max();
    int max = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (min > a)
        {
            min = a;
        }
        if (max < a)
        {
            max = a;
        }
    }
    cout << min + max << endl;

    return 0;
}