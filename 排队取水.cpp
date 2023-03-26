#include<iostream>
#include<vector>
#include<algorithm> 
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cin >> num;
	vector<int>v1(num, 0);
	vector<int>v2(num, 0);
	for (int i = 0; i < num; i++)
	{
		cin >> v1[i];
		v2[i] = i + 1;
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = num - 1; j > 0; j--)
		{
			if (v1[j] < v1[j - 1])
			{
				swap(v1[j], v1[j - 1]);
				swap(v2[j], v2[j - 1]);
			}
		}
	}
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << ' ';
	}
	double s=0;
	for (int i = 0; i < num; i++) 
	{
		v1[i] *= (num - i - 1);
		s += v1[i];
	}
	s /= num;
	cout << endl;
	printf("%1.2f", s);
}
