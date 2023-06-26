//POTD June,26, 2023
//Comments

class Solution {
public:
    long long totalCost(vector<int>& a, int k, int c) {
        priority_queue<int,vector<int>, greater<int> >p,q;
        int n=a.size();
        long long ans=0;
        int l=0,cnt=0,r=n-1;
        while(cnt<k){
            while(p.size()<c && l<=r)p.push(a[l++]);
            while(q.size()<c && r>=l)q.push(a[r--]);
            int x=p.size()>0?p.top():INT_MAX;
            int y=q.size()>0?q.top():INT_MAX;

            if(x<=y){
                ans+=x;
                p.pop();
            }
            else{
                ans+=y;
                q.pop();
            }
            cnt++;
        }
        return ans;
    }
};