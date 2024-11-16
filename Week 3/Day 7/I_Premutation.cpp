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
        vector<int> arr[n], ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                arr[i].push_back(x);
            }
        }
        if (arr[0][0] != arr[1][0] && arr[0][0] != arr[2][0])
        {
            ans.push_back(arr[1][0]);
            for (int z : arr[0]){
                ans.push_back(z);
            }
        }
        else
        {
            ans.push_back(arr[0][0]);
            for (int i = 0; i < n; i++)
            {
                if (arr[0][0] != arr[i][0])
                {
                    for (int z : arr[i]){
                        ans.push_back(z);
                    }
                }
            }
        }
        for (int z : ans)
        {
            cout << z << " ";
        }
        cout << endl;
    }

    return 0;
}
