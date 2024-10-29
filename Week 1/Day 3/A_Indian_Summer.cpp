#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    set<string> st;
    while (n--)
    {
        string s;
        getline(cin, s);
        st.insert(s);
    }
    cout << st.size();

    return 0;
}