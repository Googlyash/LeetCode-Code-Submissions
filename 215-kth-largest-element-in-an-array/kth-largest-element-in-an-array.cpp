//POTD Aug'14, 2023
//Aug'14,2023 11:09 am
//Quicksort: Editorial

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, k);
    }
    
    int quickSelect(vector<int>& nums, int k) {
        int pivot = nums[rand() % nums.size()];
        
        vector<int> left;
        vector<int> mid;
        vector<int> right;
        
        for (int num: nums) {
            if (num > pivot) {
                left.push_back(num);
            } else if (num < pivot) {
                right.push_back(num);
            } else {
                mid.push_back(num);
            }
        }
        
        if (k <= left.size()) {
            return quickSelect(left, k);
        }
        
        if (left.size() + mid.size() < k) {
            return quickSelect(right, k - left.size() - mid.size());
        }
        
        return pivot;
        
    }
};

//Time Complexity: O(n), Worst O(n^2);
//Space complexity: O(n)