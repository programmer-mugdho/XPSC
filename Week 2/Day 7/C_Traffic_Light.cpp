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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s += s;
        int x = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                count = 0;
                while (s[i] != 'g' && i < s.size())
                {
                    i++;
                    count++;
                }
                
                if (count > x)
                {
                    x = count;
                }
            }
        }
        cout << x << '\n';
    }

    return 0;
}