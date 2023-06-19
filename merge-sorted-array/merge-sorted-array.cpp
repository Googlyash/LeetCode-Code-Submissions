//Comments- Excellent Solution

class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        if(m==0){
            v1=v2;
            return;
        }
        int i=m-1,j=n-1, k=n+m-1;
        while(i>=0 && j>=0){
            if(j>=0 && v1[i]<v2[j]){
                v1[k--]=v2[j--];
            }
            else v1[k--]= v1[i--];
        }
        while(j>=0){
            v1[k--]=v2[j--];
        }
    }
};