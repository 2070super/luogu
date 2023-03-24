#include<iostream>
#include<string>
using namespace std;

void research(string mid, string end)
{
	if (mid.size() > 0)
	{
		char root = *(--end.end());
		cout << root;
		int k = mid.find(root);
		research(mid.substr(0, k), end.substr(0, k));
		research(mid.substr(k + 1), end.substr(k, end.size() - k-1));
	}
}
int main()
{
	string mid, end;
	cin >> mid;
	cin >> end;
	research(mid, end);
	return 0;

}
