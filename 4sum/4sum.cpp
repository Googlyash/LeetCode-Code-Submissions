//Striver Day4: Arrays Part-IV
//Self-solved (ideataken from 3sum question)
//Gand fat gai bhai \U0001f623
//wierd

#define ll long long
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        long long n=a.size();
        vector<vector<int>>ans;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            int ni=a[i];
            for(int j=i+1;j<n-2;j++){
                int nj=a[j];
                int k=j+1;
                int l=n-1;
                while(k<l){
                    int nk=a[k];
                    int nl=a[l];
                    long sum=a[i];
                    sum+=a[j];
                    if(sum>INT_MAX){
                        l--;
                        break;
                    }
                    sum+=a[k];
                    if(sum>INT_MAX){
                        l--;
                        break;
                    }
                    sum+=a[l];
                    if(sum>INT_MAX){
                        l--;
                        continue;
                    }
                    if(sum==target)
                    {
                        ans.push_back({a[i],a[j],a[k],a[l]});
                        while(k<l && a[k]==nk)k++;
                        while(k<l && a[l]==nl)l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
                while(j<n-1 && a[j]==a[j+1])j++;
            }
            while(i<n-1 && a[i]==a[i+1])i++;
        }
        return ans;
    }
};