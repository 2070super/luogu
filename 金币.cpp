#include<iostream>
using namespace std;
int main() 
{
	int num;
	cin>>num;
	size_t ans=0;
	int i=0;
	while(1)
	{
		if(num-i>0)
		{
			ans+=i*i;
			num-=i;
			i++;
		}
		else
		{
			ans+=i*num;
			break;
		}
	}
	cout<<ans<<endl;
}