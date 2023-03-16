#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(vector<int>& num1)
{
	int f = 1;
	for (int i = num1.size() - 1; i >= 0; i--)
	{
		if (num1[i] == 0 && f)
		{
			continue;
		}
		cout << num1[i];
		f = 0;
	}
	if (f) cout << 0;
}
void add(vector<int>&num1, vector<int>&num2)
{
	if (num1.size() < num2.size())
	{
		swap(num1, num2);
	}
	int flag = 0;
	for (int i = 0; i < num2.size(); i++)
	{
		num1[i] = num2[i]+num1[i]+flag;
		flag = 0;
		if (num1[i] > 9)
		{
			while (num1[i] >9)
			{
				num1[i]-=10;
				flag++;
			}
		}
	}
	for (int i = num2.size(); i < num1.size(); i++)
	{
		num1[i] += flag;
		flag = 0;
		if (num1[i] > 9)
		{
			while (num1[i] > 9)
			{
				num1[i] -= 10;
				flag++;
			}
		}
	}
	if (flag != 0)
		num1.push_back(flag);
	print(num1);
}
void sub(vector<int>& num1, vector<int>& num2)
{
	int sub = 0;
	if (num1.size() != num2.size())
	{
		if (num1.size() < num2.size())
		{
			swap(num1, num2);
			sub = 1;
		}
	}
	else
	{
		for (int i = 0; i < num1.size(); i++)
		{
			if (num1[i] == num2[i])
			{
				continue;
			}
			else
			{
				if (num1[i] < num2[i])
				{
					swap(num1, num2);
					sub = 1;
				}
				break;
			}
		}
	}
	int flag = 0;
	for (int i = 0; i < num2.size(); i++)
	{
		num1[i] -= (flag + num2[i]);
		flag = 0;
		while (num1[i] < 0)
		{
			num1[i] += 10;
			flag++;
		}
	}
	if (flag != 0)
	{
		for (int i = num2.size(); i < num1.size(); i++)
		{
			num1[i] -= flag;
			flag = 0;
			while (num1[i] < 0)
			{
				num1[i] += 10;
				flag++;
			}
		}
	}
	if (sub == 1)
	{
		cout << '-';
	}
	print(num1);
}
void mult(vector<int>& num1, vector<int>& num2)
{
	vector<vector<int>> num3(num1.size());
	int flag=0;
	for (int i = 0; i < num1.size(); i++)
	{
		for (int j = 0; j < num2.size(); j++)
		{
			int num = num1[i] * num2[j] + flag;
			flag = num / 10;
			num %= 10;
			num3[i].push_back(num);
		}
		for (int j = 0; j < i; j++)
		{
			num3[i].push_back(0);
		}
	}
}
int main()
{
	string num1, num2;
	cin >> num1;
	cin >> num2;
	vector<int> n1, n2;
	for (int i = num1.size()-1; i >=0 ; i--)
	{
		n1.push_back(num1[i] - '0');
	}
	for (int i = num2.size()-1; i >= 0; i--)
	{
		n2.push_back(num2[i] - '0');
	}
	//add(n1, n2);
	sub(n1, n2);
}