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
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s[i] == 'x')
                    s.insert(i + 1, "y");
                else
                    s.insert(i + 1, "x");
                flag = true;
                break;
            }
        }
        
        if (flag == false)
        {
            if (s[s.length() - 1] == 'x')
            {
                s.append("y");
            }
            else
            {
                s.append("x");
            }
        }
        cout << s << '\n';
    }
    return 0;
}
