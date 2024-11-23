#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, i, mn, mx, ans;
        cin >> n >> m;

        while (n >= 3 && m >= 3)
        {
            n -= 3;
            m -= 3;
        }
        cout << min(n, m) << endl;
    }

    return 0;
}