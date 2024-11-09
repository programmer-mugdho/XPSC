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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = n - 1, mn = 1, mx = n;
        bool flag = false;
        while (r >= l)
        {
            if ((a[l] == mn && a[r] == mx) || (a[l] == mx && a[r] == mn))
            {
                l++;
                r--;
                mn++;
                mx--;
            }
            else if (a[l] == mn)
            {
                l++;
                mn++;
            }
            else if (a[l] == mx)
            {
                l++;
                mx--;
            }
            else if (a[r] == mn)
            {
                r--;
                mn++;
            }
            else if (a[r] == mx)
            {
                r--;
                mx--;
            }
            else
            {
                cout << l+1 << " " << r+1 << '\n';
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << -1 << '\n';
    }
    return 0;
}