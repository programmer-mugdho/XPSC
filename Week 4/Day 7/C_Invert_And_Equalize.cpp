#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, mn, mx, i, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (i = 0; i < n - 1; i++)
            if (s[i] != s[i + 1])
                ans++;

        cout << (ans + 1) / 2 << endl;
    }
    return 0;
}