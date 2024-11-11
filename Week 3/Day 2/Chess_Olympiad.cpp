#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float x, y, z, t1, t2;
    cin >> x >> y >> z;
    t1 = x + (y * 0.5);
    t2 = z + (y * 0.5);
    for (int i = x + z+y; i < 4; i++)
    {
        t1 += 1;
    }
    if (t1 > t2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}