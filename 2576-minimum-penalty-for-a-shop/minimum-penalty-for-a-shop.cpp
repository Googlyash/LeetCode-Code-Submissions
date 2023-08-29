//POTD Aug'29, 2023
//Aug'29, 2023 10:13 am

class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>pre(n+1, 0), suf(n+1, 0);
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+(customers[i]=='N');
            suf[n-1-i]=suf[n-i]+ (customers[n-1-i]=='Y');
        }
        v.push_back({pre[n], n});
        for(int i=0;i<n;i++){
            cout<<pre[i+1]<<" "<<suf[i]<<"\n";
            v.push_back({pre[i]+suf[i], i});
        }
        sort(v.begin(), v.end());
        return v[0].second;
    }
};

//15:24 Time taken