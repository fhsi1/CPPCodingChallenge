#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    vector<double> a(n);
    double avg = 0.0;

    for (auto &aa : a)
    {
        cin >> aa;
        avg += aa;
    }

    avg /= n;
    for (auto aa : a)
    {
        cout << fixed << setprecision(2) << abs(aa - avg) << endl;
    }

    return 0;
}