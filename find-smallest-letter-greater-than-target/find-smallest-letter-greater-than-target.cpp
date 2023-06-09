class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int l=0,r=n-1,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(letters[mid]<=target)l=mid+1;
            else r=mid-1;
        }
        return (l>=letters.size())? letters[0]:letters[l];
    }
};