#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, s;
    cin >> n >> s;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long x = 0;
    long long l = 0, result = 0;
    for (int r = 0; r < n; r++)
    {
        x += v[r];
        while (x > s)
        {
            x -= v[l];
            l++;
        }
        result = max(result, r - l + 1);
    }
    cout << result << endl;

    return 0;
}