//POTD Oct'5, 2023
//Oct'5, 2023 10:59 am

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int mx=0, n=nums.size(), y(-1), z(-1), mxy(0),mxz(0);
        for(auto val:nums){
            if(val==y){
                mxy++;
            }
            else if(z==val){
                mxz++;
            }
            else if(!mxy){
                y=val;
                mxy=1;
            }
            else if(!mxz){
                z=val, mxz=1;
            }
            else {
                mxy--,mxz--;
            }
        }
        int cy=0,cz=0;
        for(auto val:nums){
            if(val==y)cy++;
            else if(val==z)cz++;
        }
        if(cy>n/3)ans.push_back(y);
        if(cz>n/3)ans.push_back(z);
        return ans;
    }
};

//Self Solved earlier, noon-optimal
//Commnts:Optimal