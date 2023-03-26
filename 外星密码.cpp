#include<iostream>
#include<string>
using namespace std;
string read()
{
	int n;
	char c;
	string s="", s1;
	while (cin >> c)
	{
		if (c == '[')
		{
			cin >> n;
			s1 = read();
			while (n--) s += s1;
		}
		else
		{
			if (c == ']')return s;
			else
			{
				s += c;
			}
		}
	}
	return s;
}
int main()
{
	cout << read();
	return 0;
}
