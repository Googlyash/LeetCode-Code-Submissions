//Sep'12, 2023 12:09 pm

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size(), flag=0;
        if(n==k)return "0";
        stack<char>st;
        for(int i=0;i<n;i++){
            while(k && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
            if(st.size()==1 && num[i]=='0' ){
                st.pop();
            }
        }
        while(k && !st.empty()){
            k--;
            st.pop();
        }
        string s, s1;
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        if(s=="")return "0";
        return s;
    }
};

//Self: 37 min