//Sliding Window
//Sep'27, 2023 06:18 pm

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        map<int, int>mp;
        int i=0, j=0, ans=0;
        while(j<n){
            mp[fruits[j]]++;
            while(mp.size()>2){
                ans=max(ans, j-i);
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0){
                    mp.erase(fruits[i]);
                }
                i++;
            }
            ans=max(ans, j-i+1);
            j++;
        }
        ans=max(ans, j-i);
        return ans;
    }
};