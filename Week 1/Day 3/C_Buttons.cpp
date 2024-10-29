#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[2];
    cin >> a[0] >> a[1];
    sort(a, a + 2);
    if (((a[1] * 2) - 1) > a[1] + a[0])
    {
        cout << (a[1] * 2) - 1;
    }
    else
        cout << a[1] + a[0];
    return 0;
}