#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int mx = 0;
    for (auto i : mp)
    {
        if(i.second>mx){
            mx=i.second;
        }
    }
    cout << mx << endl;
    return 0;
}