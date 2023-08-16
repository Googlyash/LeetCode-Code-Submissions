//POTD Aug'16, 2023 
//Aug'17, 2023 01:26 pm
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
    if (k == 0) return result;
    priority_queue<pair<int, int>> w;
    for (int i = 0, n = (int)nums.size(); i < n; i++) {
        while (!w.empty() && w.top().second <= i-k)
            w.pop();
        w.push(make_pair(nums[i],i));
        if (i >= k-1)
            result.push_back(w.top().first);
    }
    return result;
    }
};