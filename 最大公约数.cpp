#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>n>>m;
	int s=n,k=m;
	while(k%s!=0)
	{
		int r=k%s; 
		k=s;
		s=r; 
	}
	int a=m*n/s;
	cout<<s<<' '<<a<<endl;
} 
