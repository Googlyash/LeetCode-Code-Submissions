//POTD Aug'7, 2023
//Striver day3
//Self solved
//Lode lag gaye
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int n=a.size(), m=a[0].size();
        int l=0, r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;

            if(a[mid][0]==target){
                return 1;
            }
            else if(a[mid][0]<target){
                l=mid+1;
            }
            else r=mid-1;
        }
        if(r<0)r=0;
        int lr=0, rr=m-1;

        while(lr<=rr){
            int mid=lr+(rr-lr)/2;

            if(a[r][mid]==target){
                return 1;
            }
            else if(a[r][mid]<target){
                lr=mid+1;
            }
            else rr=mid-1;
        }
        return 0;
    }
};

