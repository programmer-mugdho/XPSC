#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> arr;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            arr.push_back(a[i]);
            i++;
        }
        else
        {
            arr.push_back(b[j]);
            j++;
        }
    }
    for (; i < n; i++)
    {
        arr.push_back(a[i]);
    }
    for (; j < m; j++)
    {
        arr.push_back(b[j]);
    }
    for (int i = 0; i < n + m; i++)
        cout << arr[i] << ' ';
    return 0;
}