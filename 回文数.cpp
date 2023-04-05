#include<iostream> 
#include<string>
#include<vector>
using namespace std;
bool duichen(vector<int> v1)
{
	auto begin = v1.begin();
	auto end = v1.end()-1;
	if (v1.size() == 2)
	{
		if (v1[0] != v1[1])
		{
			return false;
		}
	}
	if (v1.size()%2==0)
	{
		while (begin+1 != end )
		{
			if (*begin != *end)
			{
				return false;
			}
			begin++;
			end--;
		}
	}
	else
	{
		while (begin != end)
		{
			if (*begin != *end)
			{
				return false;
			}
			begin++;
			end--;
		}
	}
	return true;
}
vector<int> get(vector<int> v1)
{
	vector<int> v2;
	for (int i = v1.size() - 1; i >= 0; i--)
	{
		v2.push_back(v1[i]);
	}
	return v2;
}
vector<int> add(vector<int> v1, vector<int> v2, int n)
{
	vector<int> v3, v4;
	for (int i = v1.size() - 1; i >= 0; i--)
	{
		v3.push_back(v1[i]);
	}
	for (int i = v2.size() - 1; i >= 0; i--)
	{
		v4.push_back(v2[i]);
	}
	if (v3.size() < v4.size())
	{
		swap(v3, v4);
	}
	for (int i = 0; i < v4.size(); i++)
	{
		v3[i] += v4[i];
	}
	int flag = 0;
	for (int i = 0; i < v3.size(); i++)
	{
		v3[i] += flag;
		if (v3[i] >= n)
		{
			flag = v3[i] / n;
			v3[i] %= n;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag != 0)
	{
		v3.push_back(flag);
	}
	v1.clear();
	for(int i = v3.size() - 1; i >= 0; i--)
	{
		v1.push_back(v3[i]);
	}
	return v1;
}
int main()
{
	int n;
	string s1;
	cin >> n >> s1;
	vector<int>v;
	for (int i = 0; i < s1.size(); i++)
	{	
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			switch (s1[i])
			{
			case'A':v.push_back(10); break;
			case'B':v.push_back(11); break;
			case'C':v.push_back(12); break;
			case'D':v.push_back(13); break;
			case'E':v.push_back(14); break;
			case'F':v.push_back(15); break;
			}
		}
		else
		v.push_back(s1[i] - '0');
	}
	int step = 0;
	while (!duichen(v))
	{
		vector<int> v1;
		v1 = get(v);
		v = add(v, v1, n);
		step++;
		if (step == 30)
		{
			cout << "Impossible!";
			return 0;
		}
	}
	cout << "STEP=" << step;
	return 0;
}