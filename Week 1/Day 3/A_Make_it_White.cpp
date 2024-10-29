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
        int start, end;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                start = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                end = i;
                break;
            }
        }
        cout << end - start + 1 << '\n';
    }
    return 0;
}