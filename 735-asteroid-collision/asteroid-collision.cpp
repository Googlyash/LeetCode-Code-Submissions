// Jan'16, 2025 07:41 pm

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=  asteroids.size();

        stack<pair<int,int>>st1, st2;
        for(int i=0;i<n;i++){
            int cur= asteroids[i];
            if(cur>0){
                st1.push({cur, i});
            }
            else {
                while(!st1.empty() && st1.top().first<abs(cur)){
                    st1.pop();
                }
                if(!st1.empty()){
                    if(st1.top().first== abs(cur)){
                        st1.pop();
                    }
                }
                else {
                    st2.push({cur, i});
                }
            }
        }
        vector<int>ans;
        while(!st1.empty() && !st2.empty()){
            int i= st1.top().second;
            int j= st2.top().second;
            if(i>j){
                ans.push_back(st1.top().first);
                st1.pop();
            }
            else {
                ans.push_back(st2.top().first);
                st2.pop();
            }
        }
        while(!st1.empty()){
            ans.push_back(st1.top().first);
            st1.pop();
        }
        while(!st2.empty()){
            ans.push_back(st2.top().first);
            st2.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

// 10 min