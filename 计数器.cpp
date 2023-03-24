#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v(10,0);
    int num;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(i<=9)
        {
            v[i]++;
        }
        else
        {
            int n=i;
            while(n!=0)
            {
                v[n%10]++;
                n/=10;
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}