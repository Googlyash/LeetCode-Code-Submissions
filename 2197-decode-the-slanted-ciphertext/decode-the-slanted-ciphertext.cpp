// POTD Apr'4, 2026
// Apr'5, 2026 12:29 pm

class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n= rows, m= encodedText.size()/rows;

        string ans;
        for(int k=0;k<m; k++){
            for(int i=0;i<n && i<m-k;i++){
                ans+= encodedText[i*m+k+i];
            }
        }
        int cnt=0;
        for(int i= ans.size()-1;i>=0;i--){
            if(ans[i]!=' '){
                break;
            }
            cnt++;
        }
        return ans.substr(0, ans.size()-cnt);
    }
};

// 11 min