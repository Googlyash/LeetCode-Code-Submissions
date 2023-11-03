//POTD Nov'3, 2023
//Nov'3, 2023 09:48 pm

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        string s="Push";
        string s1="Pop";
        vector<string>ans;
        int cur=0, i=0;
        while(cur++<n){
            ans.push_back(s);
            if(target[i]==cur){
                i++;
                if(i==target.size()){
                    break;
                }
                continue;
            }
            ans.push_back(s1);
        }
        return ans;
    }
};