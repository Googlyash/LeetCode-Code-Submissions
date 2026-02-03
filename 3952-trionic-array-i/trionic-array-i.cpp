// POTD Feb' 3, 2026
// Feb'3, 2026 10:29 pm 

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n= nums.size();

        int dec=-1, inc= (nums[1]>nums[0]) -1, in= 0, out=0;
        if(inc==-1){
            return false;
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]== nums[i+1]){
                return false;
            }
            if(nums[i] < nums[i-1] && nums[i] < nums[i+1]){
                inc=i;
                if(inc!=-1 && dec!=-1){
                    in++;
                }
            }
            else if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                dec=i;
                cout<<i<<" "<<inc<< " "<<dec<<endl;
                if(inc!=-1 && dec!=-1){
                    out++;
                }
            }
        }
        cout<<in<<" "<<out<<endl;
        return in==1 && out==1;
    }
};

// 23 min