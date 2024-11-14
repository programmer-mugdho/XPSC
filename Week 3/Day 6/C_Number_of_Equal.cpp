#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    long long a[n], b[m];
    map<long long, long long> mp1, mp2;

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        mp1[a[i]]++;
    }
    for (long long i = 0; i < m; i++)
    {
        cin >> b[i];
        mp2[b[i]]++;
    }
    long long ans = 0;
    for (auto [x, y] : mp1)
    {
        ans += mp2[x] * y;
    }
    cout << ans << '\n';

    return 0;
}