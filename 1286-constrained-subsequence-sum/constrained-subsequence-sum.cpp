//POTD Oct'21, 2023
//Oct'21, 2023 06:36 pm


class Solution {
public:
    int constrainedSubsetSum(vector<int>& A, int k) {
        deque<int> q;
        int res = A[0];
        for (int i = 0; i < A.size(); ++i) {
            A[i] += q.size() ? q.front() : 0;
            res = max(res, A[i]);
            while (q.size() && A[i] > q.back())
                q.pop_back();
            if (A[i] > 0)
                q.push_back(A[i]);
            if (i >= k && q.size() && q.front() == A[i - k])
                q.pop_front();
        }
        return res;
    }
};

//Comments
// class Solution {
// public:
//     int constrainedSubsetSum(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int>dp(n+1, 1);
//         for(int i=0;i<n;i+++){
//             for(int j=i-k; j<i;j++){
//                 dp[i]=max(dp[i], dp[j]+nums[i]);
//             }
//         }
//         int ans=0;
//     }
// };