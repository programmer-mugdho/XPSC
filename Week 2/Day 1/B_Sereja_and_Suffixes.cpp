#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n];
    int frq[n + 1];
    set<int> st;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(a[i]);
        frq[i + 1] = st.size();
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << frq[x] << '\n';
    }

    return 0;
}