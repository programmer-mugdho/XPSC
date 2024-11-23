#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, i, j;
        string s, ss = "";
        cin >> n >> s;

        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                j = stoi(s.substr(i - 2, 2)) - 1;
                ss += j + 'a';
                i -= 2;
            }
            else
            {
                j = (s[i] - '0') - 1;
                ss += j + 'a';
            }
        }
        reverse(ss.begin(), ss.end());
        cout << ss << endl;
    }
    return 0;
}