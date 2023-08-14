//POTD Aug'14, 2023
//Aug'14,2023 11:25 am
//CountingSort: Editorial

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int minValue = INT_MAX;
        int maxValue = INT_MIN;
        
        for (int num: nums) {
            minValue = min(minValue, num);
            maxValue = max(maxValue, num);
        }
        
        vector<int> count(maxValue - minValue + 1);
        for (int num: nums) {
            count[num - minValue]++;
        }
        
        int remain = k;
        for (int num = count.size() - 1; num >= 0; num--) {
            remain -= count[num];
            if (remain <= 0) {
                return num + minValue;
            }
        }
        
        return -1;
    }
};

/*Given n as the length of nums and mmm as maxValue - minValue,
Time complexity: O(n+m)
We first find maxValue and minValue, which costs O(n)
Next, we initialize count, which costs O(m)
Next, we populate count, which costs O(n)
Finally, we iterate over the indices of count, which costs up to O(m)

Space complexity: O(m)
We create an array count with size O(m)*/