// POTD Feb'15, 2026
// Feb'16, 2026 12:59 am

class Solution {
public:
    string addBinary(string a, string b) {
        string s(min(a.size(), b.size()), '0');

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int overload=0, i=0;
        for(i=0;i<min(a.size(), b.size()); i++){
            overload= (a[i]-'0' + b[i]-'0'+ overload);
            s[i] = overload % 2 + s[i];
            overload= overload/2;
        }
        while(b.size()>i){
            overload= b[i++]-'0'+ overload;
            s.push_back(overload%2 + '0');
            overload/=2;
        }
        while(i<a.size()){
            overload= a[i++] - '0' + overload;
            s.push_back(overload%2 + '0');
            overload/=2;
        }
        if(overload>0){
            s.push_back(overload+'0');
        }
        reverse(s.begin(), s.end());
        return s;
    }
};

// 18 min