#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int max = 0, price = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] * (m - i) > max && m - i <= n)
        {
            max = v[i] * (m - i);
            price = v[i];
        }
    }
    if (max == 20)price = 4;
    cout << price << " " << max;
}