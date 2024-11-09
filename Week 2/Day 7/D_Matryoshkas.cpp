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
        int n, ans=0;
        cin >> n;
        map<int, int> mp;
        int arr[n + 10];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr + 1, arr + n + 1);
        for (int i = 1; i <= n; i++)
        {
            int value = arr[i];
            if (mp[arr[i]] != 0)
            {
                ans++;
                while (mp[value] > 0)
                {
                    mp[value]--;
                    value++;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}