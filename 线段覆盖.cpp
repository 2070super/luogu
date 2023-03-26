#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
struct Match
{
	int start;
	int end;
};
bool cmp(Match x, Match y) {
	return x.end < y.end;
}
int main()
{
	int n, i, j;
	cin >> n;
	vector<Match> M(n);
	for (i = 0; i < n; i++)cin >> M[i].start >> M[i].end;
	sort(M.begin(), M.end(), cmp);
	int pos = 0;
	int ans = 0;
	for (i = 0; i < n; i++)
	{
		if (pos <= M[i].start)
		{
			pos = M[i].end;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}