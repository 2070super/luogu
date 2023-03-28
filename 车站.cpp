#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a,n,m,x;
	cin>>a>>n>>m>>x;
	if(x<=2)
	{
		cout<<a;
		return 0;
	}
	int a1[25],a2[25];
	a1[2]=1;
	a1[3]=2;
	for(int i=4;i<n;i++)
	{
		a1[i]=a1[i-1]+a1[i-2]-1;
		a2[i]=a2[i-1]+a2[i-2]+1;
	 } 
	 int b=(m-a*a1[n-1])/a2[n-1];
	 cout<<a*a1[x]+b*a2[x];
	 return 0; 
 } 
