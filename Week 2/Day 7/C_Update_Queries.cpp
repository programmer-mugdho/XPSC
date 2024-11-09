#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> st;
        string s;
        cin >> s;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        string u;
        cin >> u;
        sort(u.begin(), u.end());
        int z = 0;
        for (auto i : st)
        {
            s[i - 1] = u[z];
            z++;
        }
        cout << s << '\n';
    }

    return 0;
}