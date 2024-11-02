#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long count = 0;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        count += a[i];
    }
    if (count % 2 == 0)
    {
        cout << count << '\n';
    }
    else
    {
        long long mn = LLONG_MAX;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
                mn = min(mn, a[i]);
        }
        count -= mn;
        if (count < 0)
            cout << 0;
        else
            cout << count << '\n';
    }
    return 0;
}