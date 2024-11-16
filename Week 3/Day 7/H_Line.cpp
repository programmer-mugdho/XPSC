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
        string s;
        vector<long long> change(n);
        cin >> s;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                ans += i;
            else
                ans += (n - i - 1);
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                change[i] = (n - i - 1) - i;
            else
                change[i] = i - (n - i - 1);
        }
        sort(change.rbegin(), change.rend());
        for (int i = 0; i < n; i++)
        {
            if (change[i] > 0)
                ans += change[i];
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}