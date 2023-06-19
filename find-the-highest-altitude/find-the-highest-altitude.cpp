class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int hiest=0,n=gain.size(),i,sum=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            hiest=max(hiest,sum);
        }
        return hiest;
    }
};