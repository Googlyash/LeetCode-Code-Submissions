//POTD June'26, 2023
//Almost self

class Solution {
public:
    long long totalCost(vector<int>& a, int k, int c) {
        priority_queue<int,vector<int>, greater<int> >p,q;
        int n=a.size();
        long long ans=0;
        int l=0,r=n-1;
        while(p.size()<c && l<=r)p.push(a[l++]);
        while(l<=r && q.size()<c)q.push(a[r--]);

        // return q.size();
        for(int i=0;i<k;i++){
            int x=p.size()>0?p.top():INT_MAX;
            int y=q.size()>0?q.top():INT_MAX;

            if(x<=y){
                ans+=x;
                p.pop();
                while(l<=r && p.size()<c)p.push(a[l++]);
            }
            else
            {
                ans+=y;
                q.pop();
                while(l<=r && q.size()<c)q.push(a[r--]);
            }
        }
        return ans;
    }
};