#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> mp;
    for (std::string::size_type i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    char c = 'a';
    if (mp.size() == 26)
    {
        cout << "None\n";
    }
    else
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (mp.find(c) == mp.end())
            {
                cout << c << '\n';
                return 0;
            }
        }
    }

    return 0;
}