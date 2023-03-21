#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int a,b,g,k;
	int n[10010][10010]={0};
	for(int l=0;l<num;l++)
	{
		cin>>a>>b>>g>>k;
		for(int i=0;i<g;i++)
		{
			for(int j=0;j<k;j++)
			{
				if((a+i)>=10010||(b+j)>=10010)
				{
					break;
				}
				else
				{
					n[a+i][b+j]=l+1;
				}
			}
		}
		}
	int x,y;
		cin>>x>>y;
		cout<<n[x][y]<<endl;
 } 
