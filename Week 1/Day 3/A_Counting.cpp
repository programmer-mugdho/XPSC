#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (b < a)
    {
        cout << 0;
    }
    else
        cout << b - a + 1;
    return 0;
}