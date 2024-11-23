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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            b[i] = (i + 1) + a[i];
        }
        sort(b.begin(), b.end());
        long long s = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            s += b[i];
            if (s > k)
                break;
            else
                res++;
        }
        cout << res << endl;
    }
    return 0;
}