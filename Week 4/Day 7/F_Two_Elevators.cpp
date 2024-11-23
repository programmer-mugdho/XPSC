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
        long long a, b, n;
        cin >> a >> b >> n;
        long long s = abs(b - n) + abs(n - 1);
        long long f = abs(a - 1);
        if (f < s)
            cout << 1 << endl;
        else if (s < f)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}