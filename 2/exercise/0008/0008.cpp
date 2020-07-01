#include <iostream>

using namespace std;

int main()
{
	int a[10][10];
	int n, i, j;
	int x = 1;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = x++;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
