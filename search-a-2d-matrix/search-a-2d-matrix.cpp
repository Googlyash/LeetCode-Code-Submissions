//Striver day3
//Comments
//Self-solved earlier
//Lode lag gaye
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size(),i;
        int l=0,r=n-1;
        while(l<r){
            int mid=(r+l+1)/2;
            if(matrix[mid][0] >target)r=mid-1;
            else l=mid;
        }
        if(matrix[l][0]== target)return 1;

        int lc=0,rc=m-1;

        while(lc<rc){
            int mid=lc+(rc-lc)/2;
            if(matrix[l][mid]==target)return 1;
            else if(matrix[l][mid]>= target)rc=mid;
            else lc=mid+1;
        }
        if(matrix[l][lc]==target)return 1;
        return 0;
    }
};