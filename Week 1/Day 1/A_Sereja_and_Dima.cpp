#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sj, dm;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sj = 0;
    dm = 0;
    bool flag = true;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (flag)
        {
            if (arr[i] < arr[j])
            {
                sj += arr[j];
                j--;
            }
            else
            {
                sj += arr[i];
                i++;
            }
        }
        else
        {
            if (arr[i] < arr[j])
            {
                dm += arr[j];
                j--;
            }
            else
            {
                dm += arr[i];
                i++;
            }
        }
        flag = !flag;
    }
    cout << sj << " " << dm << "\n";

    return 0;
}