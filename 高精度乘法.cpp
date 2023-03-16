#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	vector<int> v1;
	vector<int> v2;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		v1.push_back(s1[i] - '0');
	}
	for (int i = s2.size() - 1; i >= 0; i--)
	{
		v2.push_back(s2[i] - '0');
	}
	vector<int> v3(v1.size() + v2.size(), 0);
	for (int i = 0; i < v2.size(); i++)
	{
		for (int j = 0; j < v1.size(); j++)
		{
			v3[i + j] += v1[j] * v2[i];
		}
	}
	for (int i = 0; i < v3.size(); i++)
	{
		if (v3[i] > 9)
		{
			v3[i + 1] += v3[i] / 10;
			v3[i] %= 10;
		}
	}
	while (v3.size() > 1 && v3.back() == 0)
	{
		v3.pop_back();
	}
	for (int i = v3.size() - 1; i >= 0; i--)
	{
		cout << v3[i];
	}
}
