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
        int n;
        cin >> n;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count == a[i];
        }
        sort(a, a + n);
        int x, y, z;
        x = a[n - 3] - a[0];
        y = a[n - 1] - a[2];
        z = a[n - 2] - a[1];
        cout << min(x, min(y, z)) << '\n';
    }

    return 0;
}