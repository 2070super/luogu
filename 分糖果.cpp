#include<iostream>
using namespace std;
int main()
{
	int n,l,r;
	cin>>n>>l>>r;
	if(r-r%n<l||r==l)
	{
		cout<<r%n<<endl;
	}
	else
	{
		cout<<n-1<<endl;
	}
	return 0;
 } 