#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a, n, m, x;
	cin >> a >> n >> m >> x;
	if (x <= 2)
	{
		cout << a;
		return 0;
	}
	if (x == n)
	{
		cout << 0;
		return 0;
	}
	int up[25], cot[25];
	cot[1] = cot[2] =up[1] = a;
	for (int j = 0; j <= m; j++)
	{
		up[2] = j;
		for (int i = 3; i < n; i++)
		{
			up[i] = up[i - 1] + up[i - 2];
			cot[i] = cot[i - 1] - up[i - 1] + up[i];
		}
		if (cot[n-1] == m)
		{
			cout << cot[x];
			return 0;
		}
	}
}
