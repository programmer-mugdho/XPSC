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
        int n, m, h;
        cin >> n >> m >> h;
        vector<long long> c(n), o(m);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        for (int i = 0; i < m; i++)
            cin >> o[i];
        sort(c.begin(), c.end(), greater<long long>());
        sort(o.begin(), o.end(), greater<long long>());
        long long te = 0;
        for (int i = 0; i < min(n, m); i++)
            te += min(c[i], (h * o[i]));
        cout << te << endl;
    }

    return 0;
}