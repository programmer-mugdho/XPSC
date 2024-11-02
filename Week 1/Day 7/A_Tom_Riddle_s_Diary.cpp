#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        if (mp[x] > 0)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
        mp[x]++;
    }

    return 0;
}