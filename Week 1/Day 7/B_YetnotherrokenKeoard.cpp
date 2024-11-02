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
        string s, ans;
        cin >> s;
        int choto = 0, boro = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
                choto++;
            if (s[i] == 'B')
                boro++;
            if (s[i] != 'b' && s[i] != 'B')
            {
                if (choto > 0 && islower(s[i]))
                    choto--;
                else if (boro > 0 && isupper(s[i]))
                    boro--;
                else
                    ans += s[i];
            }
        }
        reverse(ans.begin(),ans.end());
        cout << ans << '\n';
    }

    return 0;
}