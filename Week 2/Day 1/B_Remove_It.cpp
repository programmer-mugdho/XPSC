#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != t)
        {
            a.push_back(x);
        }
    }
    for (auto &&i : a)
    {
        cout << i << " ";
    }
    cout << '\n';

    return 0;
}