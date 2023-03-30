#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int size;
	cin >> size;
	vector<int> v(size);
	for (int i = 0; i < size; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int k = size;
	int ans = 0;
	while (k > 0)
	{

	
	if (k == 1)
	{
		ans += v[0];
		break;
	}
	if (k == 2)
	{
		ans+=v[1];
		break;
	}
	if (k == 3)
	{
		ans += v[0] + v[1] + v[2];
		break;
	}
	int a1 = 0,a2 = 0;
	a1 = 2 * v[1] + v[0] + v[k - 1];
	a2 = v[k - 1] + v[k - 2] + 2 * v[0];
	ans += min(a1, a2);
	k -= 2;
	}
	cout << ans << endl;
}