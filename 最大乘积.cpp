#include<iostream>
#include<vector>
using namespace std;
static vector<int>sum;
string& sub(string& s1, int val)
{
	vector<int> v1;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		v1.push_back(s1[i] - '0');
	}
	int flag = 0;
	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = v1[i] * val + flag;
		flag = v1[i] / 10;
		v1[i] %= 10;
	}
	if (flag != 0)
	{
		while (flag > 0)
		{
			v1.push_back(flag % 10);
			flag /= 10;
		}

	}
	s1.clear();
	for (int i = v1.size() - 1; i >= 0; i--)
	{
		s1.push_back(v1[i] + '0');
	}

	return s1;
}
int main()
{
	int num;
	cin >> num;
	int sum = 0;
	vector<int> nums;
	int i;
	for (i = 2; sum < num; i++)
	{
		sum += i;
		nums.push_back(i);
	}
	if (sum != num)
	{
		int a = sum - num;
		auto local = find(nums.begin(), nums.end(), a);
		if (local != nums.end())
		{
			nums.erase(local);
		}
		else
		{
			a = a - nums[0];
			nums[nums.size() - 1] += (-a);
			nums.erase(nums.begin());
		}
	}
	string s1;
	s1.push_back('1');
	for (int i = 0; i < nums.size(); i++)
	{
		s1 = sub(s1, nums[i]);
		cout << nums[i] << ' ';
	}
	cout << endl;
	cout << s1;
}
