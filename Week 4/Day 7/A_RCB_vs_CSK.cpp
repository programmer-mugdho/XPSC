#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, i;
    cin >> n >> m;
    if ((n - m) >= 18)
        cout << "RCB\n";
    else
        cout << "CSK\n";

    return 0;
}