#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long result = 0, x = 0;
    int l = 0;

    for (int r = 0; r < n; r++)
    {
        x += a[r];
        while (x > s)
        {
            x -= a[l];
            l++;
        }
        result += r - l + 1;
    }
    cout << result << endl;
    return 0;
}