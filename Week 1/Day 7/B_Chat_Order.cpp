#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s[n];
    map<string,int> st;
    vector<string> ans(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        st[s[i]]++;
        if(st[s[i]]==1){
            ans.push_back(s[i]);
        }
    }
    cout << endl;
    for (auto i : ans)
    {
        cout << i << "\n";
    }

    return 0;
}