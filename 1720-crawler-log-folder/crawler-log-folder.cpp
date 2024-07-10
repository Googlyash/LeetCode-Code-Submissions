//POTD Jul'10, 2024
//Jul'10, 2024 09:42 pm

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n=logs.size(), ans=0;

        for(auto it:logs){
            if(it=="../"){
                if(ans>0){
                    ans--;
                }
            }
            else if(it[it.size()-2]!='.'){
                ans++;
            }
        }
        return ans;
    }
};