#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int num;
    cin>>num;
    if(num==0)
    {
        cout<<0<<' '<<0;
        return 0;
    }
    vector<int> quick;
    vector<int> slow;
    int local;
    while(cin>>local)
    {
        quick.push_back(min(local,size-local+1));
        slow.push_back(max(local,size-local+1));
    }
    sort(quick.begin(),quick.end());
    sort(slow.begin(),slow.end());
    cout<<quick[num-1]<<' '<<slow[num-1];
}