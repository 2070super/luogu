#include<map>
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    map<int, int> m;
    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;
        m[n]++;
    }
    auto it = m.begin();
    cout << m.size() << endl;
    while (it != m.end())
    {
        cout << it->first << ' ';
        it++;
    }

}
