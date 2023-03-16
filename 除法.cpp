#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s1;
	int n1;
	cin>>s1;
	cin>>n1;
	vector<int> v;
	int num=0;
	for(int i=0;i<s1.size();i++)
	{
		num=num*10+(s1[i]-'0');
		if(num>=n1)
		{
			v.push_back(num/n1);
			num%=n1;
		}	
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
} 
