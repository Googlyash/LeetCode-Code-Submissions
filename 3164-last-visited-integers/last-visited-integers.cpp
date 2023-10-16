//BiWeely Contest 115 Oct'14, 2023
//Oct'14, 2023 04:45 pm

class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        int n=words.size();
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(words[i]!="prev"){
                for(int j=i-1;j>=0 && cnt>0;j--){
                    if(words[j]!="prev"){
                        int k=stoi(words[j]);
                        ans.push_back(k);
                        cnt--;
                    }
                }
                while(cnt--){
                    ans.push_back(-1);
                }
                cnt=0;
            }
            else {
                cnt++;
            }
        }
        cout<<cnt;
        for(int j=n-1;j>=0 && cnt>0;j--){
            if(words[j]!="prev"){
                int k=stoi(words[j]);
                ans.push_back(k);
                cnt--;
            }
        }
        while(cnt--){
            ans.push_back(-1);
        }
        return ans;
    }
};