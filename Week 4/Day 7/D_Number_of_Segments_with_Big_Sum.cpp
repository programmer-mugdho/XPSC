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

    int l = 0;
    long long x = 0, result = 0;
    for (int r = 0; r < n; r++)
    {
        x += a[r];
        while (x >= s)
        {
            x -= a[l];
            l++;
        }
        result += l;
    }
    cout << result << endl;
    return 0;
}