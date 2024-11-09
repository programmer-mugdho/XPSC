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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        while (q--)
        {
            int a;
            cin >> a;
            if (a < v[0])
            {
                cout << v[0] - 1 << '\n';
                continue;
            }
            if (a > v[m - 1])
            {
                cout << n - v[m - 1] << '\n';
                continue;
            }
            auto it = lower_bound(v.begin(), v.end(), a);
            auto temp = it;
            temp--;

            int left = *temp;
            int right = *it;
            int mid = (right + left) / 2;
            cout << min(abs(mid - left), abs(mid - right)) << '\n';
        }
    }

    return 0;
}
