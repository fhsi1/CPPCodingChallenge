#include <iostream>
#include <map>


using namespace std;

int main()
{
    map<int, int> num_count;
    int num, counts;

    for (int i = 0; i < 10; i++)
    {
        cin >> num;

        num_count[num]++;
    }

    for (auto n : num_count)
    {
        cout << n.first << " = " << n.second << endl;
    }

    return 0;
}