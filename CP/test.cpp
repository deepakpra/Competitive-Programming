#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class sol
{
public:
    vector<int> maxwindow(vector<int> &nums, int k)
    {
        deque<int> dq;
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            if (!dq.empty() && dq.back() > nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(nums[i]);
        }
        for (int i = k; i < nums.size(); i++)
        {
            if (dq.front() == nums[i - k])
                dq.pop_front();
            if (!dq.empty() && dq.back() > nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(nums[i]);
            ans.push_back(dq.front());
        }
        return ans;
    }
};

int main()
{
    sol mg;
    vector<int> g;
    int j;
    cout << "enter the size of element";
    cin >> j;
    for (int i = 0; i < j; i++)
    {
        g.push_back(j);
    }
    vector<int> ans = mg.maxwindow(g, 2);
    cout << ans.size() << "\n";
    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}