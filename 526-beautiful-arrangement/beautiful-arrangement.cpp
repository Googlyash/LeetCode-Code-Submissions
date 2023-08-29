//Aug'29, 2023 04:06 pm
//Seems much confusing
//Editorial

class Solution {
private:
    int cnt=0;
     void solve(int i, vector<int>&a){
        if(i==a.size()){
           cnt++;
        }
        for(int j=i;j<a.size(); j++){
            if((i+1)%a[j]==0 || a[j]%(i+1)==0){
                swap(a[i], a[j]);
                solve( i+1, a);
                swap(a[i], a[j]);
            }
        }
    }
public:
    int countArrangement(int n) {
        vector<int>a;;
        for(int i=0;i<n;i++){
            a.push_back(i+1);
        }
        solve( 0, a);
        return cnt;
    }
};