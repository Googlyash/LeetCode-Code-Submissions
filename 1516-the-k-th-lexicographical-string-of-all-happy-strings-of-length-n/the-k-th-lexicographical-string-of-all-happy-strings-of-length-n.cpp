// POTD Mar'14, 2026
// Mar'14, 2026 09:39 pm

class Solution {
    char choose(string s, int rem){
        char c= s[s.size()-1];
        if(c=='a'){
            return ('b'+rem);
        }
        if(c=='b'){
            return rem==1 ? 'c' : 'a';
        }
        return 'a'+rem;
    }
public:
    string getHappyString(int n, int k) {
        string s;

        int r=1;
        for(int i=1;i<n;i++){
            r*=2;
        }
        if(k>r*3){
            return s;
        }
        cout<<r;
        k--;
        s+= ('a' + (k/r));
        k%=r;
        for(int i=1;i<n;i++){
            r/=2;
            s+= choose(s, k/r);
            k%=r;
        }
        return k==0 ? s : "";
    }
};

// 19 min