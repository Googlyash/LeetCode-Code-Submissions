// POTD Aug'7, 2025
// Aug'7, 2025 09:20 pm
// Excellent question

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n= fruits.size();
        int sqn= floor(sqrt(n)), ans=n;
        vector<pair<int, int>>sq(sqn+4, {0,0});

        for(int i=0;i<n;i+=sqn){
            for(int j=i;j<i+sqn && j<n;j++){
                if(baskets[j]>= sq[j/sqn].first){
                    sq[j/sqn].first= baskets[j];
                    sq[j/sqn].second= j;
                }
            }
        }
        // for(auto it:sq)cout<<it.first<<" ";
        // cout<<endl<<endl;
        for(int i=0;i<n;i++){
            int cur= fruits[i];
            bool flag=0;

            cout<<cur<<": ";
            for(int j=0;j<sqn+4;j++){
                if(sq[j].first>=cur){
                    flag=1;
                    // cout<<sq[j].first<<" ";
                    sq[j].first=0;
                    for(int k=sqn*j; k<n && k<sqn*(j+1);k++){
                        if(baskets[k]>= cur){
                            // cout<<"basket= "<<baskets[k]<<" ";
                            baskets[k]=0;
                            break;
                        }
                    }
                    for(int k=sqn*j; k<n && k<sqn*(j+1);k++){
                        // cout<<"k="<<baskets[k]<<" ";
                        if(baskets[k]>= sq[j].first){
                            sq[j].first= baskets[k];
                            sq[j].second= k;
                        }
                    }
                    break;
                }
            }
            // cout<<endl;
            if(flag)ans--;
        }

        return ans;
    }
};

// Comments
// 54 min