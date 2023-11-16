class Solution {
public:
    int tr(string y){
        reverse(y.begin(),y.end());
        int yr=0;
        for(int i=0;i<y.size();i++){
            yr+=(pow(2,i)*(y[i]-'0'));
        }
        return yr;
    }
    string bs(int u){
        string y;
        while(u){
            int yr=u%2;
            u/=2;
            y+=(yr+'0');
        }
        reverse(y.begin(),y.end());
        return y;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[tr(nums[i])]++;
        }
        for(int i=0;i<pow(2,n);i++){
            if(m[i]==0){
                string yr=bs(i);
                reverse(yr.begin(),yr.end());
                while(yr.size()!=n) yr+='0';
                reverse(yr.begin(),yr.end());
                return yr;
            }
        }
        string ut;
        return ut;
    }
};