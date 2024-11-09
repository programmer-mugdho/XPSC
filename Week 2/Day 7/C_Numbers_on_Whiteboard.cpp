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
        cout << 2 << '\n';
        int l = n;
        int r = n - 1;
        for (int i = 1; i < n; i++)
        {
            cout << l << " " << r << '\n';
            l = (l + r + 1) / 2;
            r--;
        }
    }

    return 0;
}