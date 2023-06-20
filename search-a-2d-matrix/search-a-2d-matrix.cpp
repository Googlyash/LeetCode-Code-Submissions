//Striver day3
//Self solved
//Lode lag gaye
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size(),i;
        int l=0,r=n-1;
        while(l<r){
            int mid=l+(r-l)/2;

            if(matrix[mid][0]== target)return 1;
            else if(matrix[mid][0]>target)r=mid;
            else l=mid+1;
        }
        if(matrix[l][0]== target)return 1;
        int lc=0,rc=m-1;
        if(matrix[l][0] >target)l=max(0,l-1);
        while(lc<rc){
            int mid=lc+(rc-lc)/2;
            if(matrix[l][mid]==target)return 1;
            else if(matrix[l][mid]> target)rc=mid;
            else lc=mid+1;
        }
        if(matrix[l][lc]==target)return 1;
        return 0;
    }
};