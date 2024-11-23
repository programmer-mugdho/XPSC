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
        long long a, b, n, s = 0;
        cin >> a >> b >> n;
        long long x[n], i;
        for (i = 0; i < n; i++)
            cin >> x[i];
        s += b - 1;
        for (i = 0; i < n; i++)
            s += min(x[i], a - 1);

        cout << s + 1 << endl;
    }
    return 0;
}