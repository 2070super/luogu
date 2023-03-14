#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int num;
	int ans=0;
	cin>>num;
	vector<bool> flag(num+1,false);
	vector<int> v;
	for(int i=2;i<num;i++)
	{
		if(!flag[i])
		{
			v.push_back(i);
		}
	for(int j=0;j<v.size()&&i*v[j]<=num;j++)
	{
		flag[i*v[j]]=true;
	
	if(i%v[j]==0)
	{
		break;
	 }
	 } 
  }
  cout<<v.size();
} 
