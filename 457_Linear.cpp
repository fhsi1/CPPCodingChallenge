#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int test_num, test_data_num = 0;

    cin >> test_num;

    vector<int> test_data(0);

    char output[] = {' ', '.', 'x', 'W'};

    while (test_num--)
    {
        vector<int> cell(40);
        vector<int> cell_assist;

        for (int i = 0; i < 10; i++)
        {
            cin >> test_data_num;
            test_data.insert(test_data.begin() + i, test_data_num);
        }

        cell.insert(cell.begin() + 19, 1);

        for (int c = 0; c < cell.size(); c++)
        {
            cout << output[cell[c]];
        }

        cout << endl;

        cell_assist = cell;

        for (int i = 1; i < 50; i++)
        {
            cell[0] = test_data[cell_assist[0] + cell_assist[1]];
            cout << output[cell[0]];

            for (int j = 1; j < 39; j++)
            {
                cell[j] = test_data[cell_assist[j - 1] + cell_assist[j] + cell_assist[j + 1]];
                cout << output[cell[j]];
            }

            cell[39] = test_data[cell_assist[38] + cell_assist[39]];
            cout << output[cell[39]] << endl;

            cell_assist = cell;
        }
        cout << endl;
    }
    return 0;
}