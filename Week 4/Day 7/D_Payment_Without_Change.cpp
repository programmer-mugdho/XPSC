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
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        long long aa = s / n;
        long long bb = s % n;
        long long ss = (a * n) + b;
        if (bb <= b && 1ll * ss >= s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}