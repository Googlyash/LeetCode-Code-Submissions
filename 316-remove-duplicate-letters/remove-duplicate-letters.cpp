//Sep'11, 2023 10:19 pm

class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        map<char, int>mp1, mp2;
        for(int i=n-1; i>=0; i--){
            mp1[s[i]]++;
        }
        stack<char>stk;
        for(int i=0;i<n;i++){
            if( !mp2[s[i]]){
                while(!stk.empty() && mp1[stk.top()]!=0 && stk.top()>s[i]){
                    mp2[stk.top()]--;
                    stk.pop();
                }
                stk.push(s[i]);
                mp2[s[i]]++;
            }
            mp1[s[i]]--;
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
//Earlier self-solved
//Small modoifications