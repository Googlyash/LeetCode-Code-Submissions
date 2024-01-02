//POTD Jan'2, 2024
//Jan'2, 2024 11:16 pm

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        int n = nums.size(), i = 0, j = n - 1;
        while (i < n && nums[i] == sorted[i]) {
            i++;
        }
        while (j > i && nums[j] == sorted[j]) {
            j--;
        }
        return j + 1 - i;
    }
};

//Comments