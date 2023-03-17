#include<string>
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
	string str = "0123456789ABCDEF";
	string s;
	cin >> s;
	size_t num=0;
	for (int i = 0; i < s.size(); i++)
	{
		num= num+str.find(s[i]) * (pow(16 , (s.size() - i-1)));
	}
	cout << num;
}