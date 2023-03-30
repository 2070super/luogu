#include<iostream>
using namespace std;
int main()
{
	int n, x;
	cin >> x >> n;
	long long sum = 1;
	for (int i = 0; i < n; i++)
	{
		sum += sum * x;
	}
	cout << sum;
	return 0;
}
