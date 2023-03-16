#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include<map>
using namespace std;
int main()
{
	vector<string> v;
	string str;
	string s;
	getline(cin, str);
	for(int i=0;i<str.size();i++)
	{
		if (str[i] == ' ')
		{
			v.push_back(s);
			s.clear();
		}
		else
		{
			s.push_back(str[i]);
		}
	}
	v.push_back(s);
	sort(v.begin(), v.end());
	map<string, int> m;
	for (int i = 0; i < v.size(); i++)
	{	
		if (m[v[i]] == 0)
		{
			cout << v[i] << endl;
			m[v[i]]++;
		}
		
	}
}
