#include<iostream>
#include<vector>
#include<string>
using namespace std;
string& sub(string& s1, int val)
{
	vector<int> v1;
	for (int i = s1.size()-1;i>=0; i--)
	{
		v1.push_back(s1[i] - '0');
	}
	int flag = 0;
	for (int i = 0; i<v1.size(); i++)
	{
		v1[i] =v1[i]* val+flag;
		flag = v1[i] / 10;
		v1[i] %=10 ;
	}
	if (flag != 0)
	{
		while (flag > 0)
		{
			v1.push_back(flag%10);
			flag /= 10;
		}
		
	}
	s1.clear();
	for (int i = v1.size()-1; i >=0 ; i--)
	{
		s1.push_back(v1[i]+'0');
	}
	
	return s1;
}
int main()
{
	vector<int> v;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int num1, num2;
		cin >> num1 >> num2;
		string ans;
		ans.push_back('1');
		for (int j = 1; j <= num1; j++)
		{
			ans = sub(ans, j);
		}
		int ans1 = 0;
		for (int i = 0; i < ans.size(); i++)
		{
			if (ans[i] == (num2 + '0'))
			{
				ans1++;
			}
		}
		v.push_back(ans1);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}