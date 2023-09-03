//Weekly Contest-361 Sep'3, 2023

class Solution {
public:
    int minimumOperations(string s) {
        int n=s.size(),ans=n;
        int z1=n, f=n+1, cnt=0;

        for(int i=n-1; i>=0; i--){
            if(s[i]=='0' && z1==n){
                z1=i;
            }
            else if((s[i]=='0' || s[i]=='5') && z1<n){
                f=n-1-i;
                break;
            }
        }
        ans=min(ans, f-1);
        z1=n, f=n+1;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='5' && z1==n){
                z1=i;
            }
            else if((s[i]=='2' || s[i]=='7') && z1<n){
                f=n-1-i;
                break;
            }
        }
        ans=min(ans, f-1);

        for(int i=0;i<n;i++){
            if(s[i]=='0')cnt++;
        }
        cout<<ans<<endl;
        ans=min(ans, n-cnt);
        cout<<ans<<endl;
        return ans;
    }
};