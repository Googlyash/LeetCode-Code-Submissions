// Jan'23, 2025 04:12 pm

class Solution {
public:
    string decodeString(string s) {
        int n= s.size();
        string ans;

        int k=0;
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                ans+=s[i];
            }
            else if(s[i]>='0' && s[i]<='9'){
                k=0;
                while(s[i]!='['){
                    k*=10;
                    k+=s[i++]-'0';
                }
                int j=i+1;
                int cnt=1;
                while(cnt){
                    if(s[j]=='[')cnt++;
                    else if(s[j]==']')cnt--;
                    j++;
                }
                j--;
                string s1= decodeString(s.substr(i+1, j-i-1));
                cout<<s1<<" "<<k<<" "<<s.substr(i+1, j-i-1)<<endl;
                while(k--){
                    ans.append(s1);
                }
                k=0;
                i=j-1;
            }
        }

        return ans;
    }
};

// 30 min