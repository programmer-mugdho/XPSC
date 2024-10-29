#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp.insert({ip, name});
    }
    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;
        ip.pop_back();
        cout <<command<<" "<< ip << "; " << "#" << mp[ip] << '\n';
    }

    return 0;
}