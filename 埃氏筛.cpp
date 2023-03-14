#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int num;
	cin>>num;
	vector<int> v(num+1,0);
	v[0]=v[1]=1;
	for(int i=2;i*i<=num;i++)
	{
		if(v[i]==0)
		{
			for(int j=i*i;j<=num;j+=i)
			{
				v[j]=1;
			}
		}
	}
	int cont=0;
	for(int i=2;i<v.size();i++)
	{
		if(v[i]==0)
		{
			cont++;
		}
	}
	cout<<cont;
}
