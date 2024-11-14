//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int> &arr, int k)
    {
        deque<int> dq;
        vector<int> ans;
        int n = arr.size();
        int i;
        for (i = 0; i < k; i++)
            if (arr[i] < 0)
                dq.push_back(i);
        for (; i < n; i++)
        {
            if (!dq.empty())
                ans.push_back(arr[dq.front()]);
            else
                ans.push_back(0);
            while ((!dq.empty()) && dq.front() < (i - k + 1))
                dq.pop_front();
            if (arr[i] < 0)
                dq.push_back(i);
        }
        if (!dq.empty())
            ans.push_back(arr[dq.front()]);
        else
            ans.push_back(0);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends