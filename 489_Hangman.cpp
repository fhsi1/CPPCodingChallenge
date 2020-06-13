#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int round;
    string x,y;

    while(1)
    {
        cin >> round;
        if (round == -1)
        {
            break;
        }
        cout << "Round " << round << endl;

        cin >> x >> y;
        set<char> voca(x.begin(), x.end());
        set<char> answer(y.begin(), y.end());
        
        while(1)
        {
            if (voca == answer)
            {
                cout << "You win." << endl;
                break;
            }
            else if (voca != answer)
            {
                cout << "You lose." << endl;
                break;
            }            
        }
        if (answer.size() > 6)
        {
            cout << "You chickend out." << endl;
        }
    }

    return 0;
}