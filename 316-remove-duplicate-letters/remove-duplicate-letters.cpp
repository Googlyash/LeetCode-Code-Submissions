//Sep'11, 2023 10:19 pm

class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        map<int, int>mp;
        map<char, int>mp1, mp2;
        unordered_set<char>st;
        for(int i=n-1; i>=0; i--){
            mp[i]=st.size()- (mp1[s[i]]>0);
            mp1[s[i]]++;
            st.insert(s[i]);
        }
        int var=st.size();
        stack<char>stk;
        int cnt=var-1;
        for(int i=0;i<n;i++){
            if(mp[i]>=cnt && !mp2[s[i]]){
                while(!stk.empty() && mp1[stk.top()]!=0 && stk.top()>s[i]){
                    mp2[stk.top()]--;
                    stk.pop();
                }
                stk.push(s[i]);
                mp2[s[i]]++;
            }
            mp1[s[i]]--;
            cnt=var-stk.size()-1;
        }
        string s1;
        while(!stk.empty()){
            s1+=stk.top();
            stk.pop();
        }
        reverse(s1.begin(), s1.end());
        return s1;
    }
};

//Self, 41 minutes...