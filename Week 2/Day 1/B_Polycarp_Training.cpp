#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x)
        {
            x++;
        }
    }
    cout << --x << '\n';

    return 0;
}