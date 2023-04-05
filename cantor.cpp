#include <iostream>
using namespace std; 
int main() {
	int n,k=1;
	cin>>n;
    for(;k<n;k++)
    {
        n-=k;
    }
	if(k%2==0) cout<<n<<"/"<<(k+1-n);
	else cout<<k+1-n<<"/"<<n;
	return 0;
} 