//POTD Feb'7, 2023
//Feb'7, 2023 09:57 pm

class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        string s1;
        vector<pair<int, int>>v(512);
        for(int i=0; i<511;i++){
            v[i].second=i;
            v[i].first=0;
        }
        for(int i=0;i<n;i++){
            int k= s[i]-'0';
            // cout<<k<<" ";
            v[k].first++;
            cout<<v[k].first<<" ";
        }
        sort(v.begin(), v.end());
        for(int i=511; i>=0; i--){
            while(v[i].first>0){
                char c= (v[i].second+'0');
                s1+=c;
                v[i].first--;
            }
        }
        return s1;
    }
};

//34 min