#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> longer(n+1);
	for (int i = 1; i < n; i++)
	{
		cin >> longer[i];
	}
	vector<int> green(n+1);
	vector<int> red(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >> red[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> green[i];
	}
	
	for (int i = 1; i <= n; i++)
	{
		if (i >= 2)
		{
			m += longer[i - 1];
		}
		else
		{
			m += 0;
		}
		if (m % (green[i] + red[i] )> green[i])
		{
			m += (green[i] + red[i] - m % (red[i] + green[i]));
			
		}
        cout << m << endl;
	}
}