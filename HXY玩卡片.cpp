#include<iostream>
using namespace std;

int main()
{
	int num;
	int a;
	cin >> num;
	int a0 = 0, a5 = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> a;
		if (a == 5)
		{
			a5++;
		}
		else
		{
			a0++;
		}
	}
	if (a0 == 0)
	{
		cout << -1;
		return 0;
	}
	if (a5 > 9)
	{
		for (int i = 0; i < a5 / 9*9; i++)
		{
			cout << 5;
		}
		for (int i = 0; i < a0; i++)
		{
			cout << 0;
		}
		return 0;
	}
	else
	{
		cout << 0;
		return 0;
	}
}