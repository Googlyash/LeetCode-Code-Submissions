// POTD Dec'13, 2025
// Dec'14, 2025 2:54 am

class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n= code.size();

        vector<string>ans;
        map<string, vector<string>>mp;
        for(int i=0;i<n;i++){
            if(isActive[i]==true){
                if(businessLine[i]=="electronics" || businessLine[i]=="grocery" || businessLine[i]=="pharmacy" || businessLine[i]=="restaurant"){
                    if(code[i].size()!=0){
                        bool check= true;
                        for(int j=0;j<code[i].size(); j++){
                            if(!((code[i][j]>='A' && code[i][j]<='Z') || (code[i][j]>='a' && code[i][j]<='z') || (code[i][j]>='0' && code[i][j]<='9') || code[i][j]=='_')){
                                check= false;
                                break;
                            }
                        }
                        if(check){
                            mp[businessLine[i]].push_back(code[i]);
                        }
                    }
                }
            }
        }
        for(auto it: mp){
            sort(it.second.begin(), it.second.end());
            for(auto s: it.second){
                ans.push_back(s);
            }
        }
        return ans;
    }
};

// 13 min