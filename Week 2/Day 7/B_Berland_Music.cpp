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
        vector<int> ratings(n), newRatings(n);
        vector<int> liked, disliked;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> ratings[i];
            newRatings[i] = ratings[i];
            mp[ratings[i]] = i;
        }
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0'){
                disliked.push_back(ratings[i]);
            }
            else{
                liked.push_back(ratings[i]);
            }
        }
        sort(disliked.rbegin(), disliked.rend());
        sort(liked.rbegin(), liked.rend());
        sort(ratings.rbegin(), ratings.rend());

        int i;
        for (i = 0; i < liked.size(); i++){
            newRatings[mp[liked[i]]] = ratings[i];
        }
    
        for (int j = 0; j < disliked.size(); j++)
        {
            newRatings[mp[disliked[j]]] = ratings[i];
            i++;
        }

        for (int i = 0; i < n; i++){
            cout << newRatings[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}