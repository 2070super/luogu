#include<iostream>
#include<map>
using namespace std;
int main()
{
    int num1,num2,num3;
    for(int i=1;i<=3;i++)
    {
        for(int j=0;j<=9;j++)
        {
            for(int z=0;z<=9;z++)
            {
                 num1=i*100+j*10+z;
                 num2=num1*2;
                 num3=num1*3;
                map<int,int> m;
                m[i]++;
                m[j]++;
                m[z]++;
                while(num2>0)
                {
                    m[num2%10]++;
                    num2/=10;
                }
                while(num3>0)
                {
                    m[num3%10]++;
                    num3/=10;
                }
                int flag=0;
                auto it=m.begin();
               while(it!=m.end())
               {
                   if(it->first==0||it->second>1)
                   {
                       flag=1;
                   }
                   it++;
               }
                if(flag==0)
                {
                    cout<<num1<<' '<<2*num1<<' '<<3*num1<<endl;
                }
            }
        }
    }
}