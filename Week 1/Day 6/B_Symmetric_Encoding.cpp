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
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        string a;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        for (auto i : st)
        {
            a += i;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if (a[j] == s[i])
                {
                    s[i] = a[a.size() - j - 1];
                    break;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}