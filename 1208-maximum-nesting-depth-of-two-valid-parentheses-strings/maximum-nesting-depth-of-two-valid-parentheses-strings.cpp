// POTD Sep'30, 2026
// Sep'30, 2026 11:37 pm

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n= seq.size();

        int cnt1=0, cnt2=0, mx1=0, mx2=0;
        vector<int>ans;
        for(auto c: seq){
            if(c=='('){
                if(cnt1>=cnt2){
                    cnt2++;
                    ans.push_back(1);
                }
                else {
                    cnt1++;
                    ans.push_back(0);
                }
            }
            else if(c==')'){
                if(cnt1>=cnt2){
                    cnt1--;
                    ans.push_back(0);
                }
                else {
                    cnt2--;
                    ans.push_back(1);
                }
            }
        }
        return ans;
    }
};

// 7 min