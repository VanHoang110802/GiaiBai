// PH31092

#include <iostream>
using namespace std; 

int n, x, d[201];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		d[x + 100]++;
	}
	for (int i = 0; i <= 200; ++i)
	{
		if (d[i] == 1)
		{
			cout << (i - 100);
			return 0;
		}
	}
	cout << "khong";
	return 0;
}
