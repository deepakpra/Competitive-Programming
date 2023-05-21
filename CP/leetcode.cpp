#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)((x).size())
#define ll long long
ll mod = 1e9 + 7;
vector<int> dx = {1, 0, -1, 0, 1, 1, -1, -1};
vector<int> dy = {0, 1, 0, -1, -1, 1, 1, -1};

class Solution
{
public:
    long long solve(int n, vector<int> &a)
    {
        vector<int> p(n, 0);
        p[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            p[i] = gcd(p[i - 1], a[i]);
        }
        long long ans = 0;
        map<int, int> mp;
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp.count(p[i]))
            {
                l = mp[p[i]] + 1;
                mp[p[i]] = i;
            }
            else
            {
                mp[p[i]] = i;
            }
            ans += (i - l) + 1;
        }
        return ans;
    }
};