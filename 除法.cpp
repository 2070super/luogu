#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s1;
	long long n1;
	cin >> s1;
	cin >> n1;
	vector<int> v;
	long long num = 0;
	if (n1 == 0)
	{
		return 0;
	}
	if(s1.size()==1&&s1[0]=='0')
	{
		cout<<0;
		return 0;
	}
	for (int i = 0; i < s1.size(); i++)
	{
		num = num * 10 + (s1[i] - '0');
		v.push_back(num / n1);
		num %= n1;
	}
	int flag = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (flag == 0 &&v[i] == 0)
		{
			continue;
		}
		else
		{
			cout << v[i];
			flag = 1;
		}
	}
}
