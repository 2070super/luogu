#include<iostream>
#include<vector>
using namespace std;
static vector<int>sum;
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
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i]<<' ';
	}
}
