#include <iostream>
#include <iomanip>
#include <vector>

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
    double sum = 0.0;
    for (auto aa : a)
    {
        sum += abs(aa - avg);
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}