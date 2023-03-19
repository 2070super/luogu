#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int total,num;
	cin>>total>>num;
	vector<int> v(num);
	for(int i=0;i<num;i++)
	{
		cin>>v[i];
	}
	int ans=0;
	sort(v.begin(),v.end());
	for(int i=v.size()-1;i>=0;i--)
	{
		if(total>0)
		{
			total-=v[i];
			ans++;
		}
		else
		{
			break;
		}
	}
	if(total>0)
	{
		cout<<-1;
	}
	else
	{
		cout<<ans;
	}
	return 0;	
} 
