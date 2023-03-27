#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void test(int val)
{
	int i = 14;
	for(;i>=0;i--)
	{
		if (pow(2, i) <= val)
		{
			if (i == 0)
			{
				cout << "2(0)";
			}
			else if (i == 1)
			{
				cout << "2";
			}
			else
			{
				cout << "2(";
				test(i);
				cout << ")";
			}
			val -= pow(2, i);
			if (val != 0)
			{
				cout << "+";
			}
		}
	}
}
int main()
{
	int num;
	cin >> num;	
	test(num);
	return 0;
}