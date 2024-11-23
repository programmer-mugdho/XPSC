#include <bits/stdc++.h>
using namespace std;

struct stack
{
    vector<long long> s, mins = {LLONG_MAX}, maxs = {LLONG_MIN};

    void push(long long x)
    {
        s.push_back(x);
        mins.push_back(::min(mins.back(), x));
        maxs.push_back(::max(maxs.back(), x));
    }

    long long pop()
    {
        long long res = s.back();
        s.pop_back();
        mins.pop_back();
        maxs.pop_back();
        return res;
    }

    bool empty()
    {
        return s.empty();
    }

    long long min()
    {
        return mins.back();
    }

    long long max()
    {
        return maxs.back();
    }
};

::stack s1, s2;

void add(long long x)
{
    s2.push(x);
}

void remove()
{
    if (s1.empty())
    {
        while (!s2.empty())
        {
            s1.push(s2.pop());
        }
    }
    s1.pop();
}

long long k;

bool good()
{
    long long mn = min(s1.min(), s2.min());
    long long mx = max(s1.max(), s2.max());
    return mx - mn <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    long long result = 0;

    for (int r = 0; r < n; r++)
    {
        add(a[r]);
        while (!good())
        {
            remove();
            l++;
        }
        result += r - l + 1;
    }

    cout << result << endl;

    return 0;
}