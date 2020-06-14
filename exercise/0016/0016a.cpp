#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;

    while(n > 0)
    {
        n /= 2;
        cout << n << endl;
    }
    
    return 0;
}