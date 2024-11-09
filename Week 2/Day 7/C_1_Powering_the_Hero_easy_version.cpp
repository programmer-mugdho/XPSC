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
        long long n;
        cin >> n;
        vector<long long> a(n);
        long long ans = 0;
        priority_queue<long long> pq;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (pq.size() > 0)
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(a[i]);
        }
        cout << ans << '\n';
    }

    return 0;
}