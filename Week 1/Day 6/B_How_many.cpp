#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long s, t, count = 0;
    cin >> s >> t;

    for (long long i = 0; i <= s; i++)
    {
        for (long long j = 0; j <= s; j++)
        {
            for (long long k = 0; k <= s; k++)
            {
                if (i * j * k <= t && i + j + k <= s)
                {
                    count++;
                }
            }
        }
    }
    cout << count << "\n";
    return 0;
}