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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cursum = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                cursum++;
        }
        int ans = cursum;
        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
                cursum++;
            if (s[i - k] == 'W')
                cursum--;
            ans = min(ans, cursum);
        }
        cout << ans << '\n';
    }

    return 0;
}
