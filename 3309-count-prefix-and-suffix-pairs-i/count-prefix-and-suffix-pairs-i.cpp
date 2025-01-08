// POTD Jan'8, 2025
//Jan'8, 2025 07:13 pm

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n= words.size();

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                int cnt=0;
                if(i!=j && words[i].size()>= words[j].size()){
                    bool b1= true;
                    for(int k=0;k<words[j].size(); k++){
                        if(words[i][k]!= words[j][k]){
                            b1= false;
                            break;
                        }
                        if(words[i][words[i].size()-1-k]!= words[j][words[j].size()-k-1]){
                            b1= false;
                            break;
                        }
                    }
                    cnt+= b1;
                }
                ans+= cnt;
            }
        }

        return ans;
    }
};

// 8 min