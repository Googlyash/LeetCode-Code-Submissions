//POTD Oct'19, 2023
//Oct'19, 2023 11:42 am

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size(), m=t.size(), cnt=0;
        string s1, t1;
        for(int i=0;i<n;i++){
            if(s[i]=='#' && s1.size()>0){
                s1.pop_back();
            }
            else if(s[i]!='#'){
                s1.push_back(s[i]);
            }
        }
        for(int i=0;i<m;i++){
            if(t[i]=='#' && t1.size()>0){
                t1.pop_back();
            }
            else if(t[i]!='#'){
                t1.push_back(t[i]);
            }
        }
        return s1==t1;
    }
};

//4 min