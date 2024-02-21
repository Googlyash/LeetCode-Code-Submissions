//POTD Feb'21, 2024
//Feb'21, 2024 09: pm

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        long long k=0, ans=left&right, dif=right-left;
        while(k<left){
            k*=2;
        }
        while(k<right){
            ans&=k;
            k*=2;
        }
        while(dif && right){
            dif/=2;
            k++;
        }
        right=right>>k;
        right=right<<k;
        left=left>>k;
        left=left<<k;
        ans=left&right;
        return ans;
    }
};

//12 min