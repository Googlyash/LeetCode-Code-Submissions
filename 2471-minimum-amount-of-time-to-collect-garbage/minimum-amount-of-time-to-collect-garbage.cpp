//POTD Nov'20, 2023
//Nov'20, 2023 02:38 pm

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=garbage.size();
        int ans=0, g=0, m=0, p=0, cnt=0;
        for(int i=0;i<n;i++){
            int k=1;
            for(auto c:garbage[i]){
                if(c=='P'){
                    p=i;
                }
                else if(c=='G'){
                    g=i;
                }
                else {
                    m=i;
                }
                cnt++;
            }
            
        }
        for(int i=0;i<n-1;i++){
            if(g>0)ans+=travel[i];
            if(m>0)ans+=travel[i];
            if(p>0)ans+=travel[i];
            g--,m--,p--;
        }
        cout<<"Happy Birthday :)";
        return ans+cnt;
    }
};

//cout<<"Happy Birthday :)";