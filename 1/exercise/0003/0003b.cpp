#include <iostream>

using namespace std;

int main()
{
    string name, gender;

    cout << "name : ";
    cin >> name;
    cout << "gender : ";
    cin >> gender;
    cout << "(" << gender << " - " << name << ")";

    return 0;
}