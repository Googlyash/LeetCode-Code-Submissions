//POTD Oct'27. 2023
//Oct'27, 2023 05:44 pm

class Solution {
int size=1, idx=0;
void check(string&s, int l, int r){
    int n=s.size();
    int cur=0;
    if(l==r)cur--;
    while(l>=0 && r<n){
        if(s[l--]!=s[r++]){
            break;
        }
        cur+=2;
    }
    size=max(size, cur);
}
public:
    string longestPalindrome(string s) {
        int n=s.size();

        string s1;
        for(int i=0;i<n;i++){
            int cur=size;
            check(s, i, i);
            if(size>cur)idx=i;
            cur=size;
            if(i<n-1)check(s, i, i+1);
            if(size>cur)idx=i;
        }
        s1=s.substr(idx-(size-1)/2, size);
        return s1;
    }
};

//Self: 11 min