//POTD Aug'23, 2023
//Aug'23, 2023 06:00 pm

class Solution {
public:
    string reorganizeString(string s) {
        string s1;
        sort(s.begin(), s.end());
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int, char>>pq;
        for(auto it:mp){
            pq.push({it.second, it.first});
        }
        while(!pq.empty()){
            char c=pq.top().second;
            int temp=pq.top().first;
            s1+=c;
            temp--;
            pq.pop();
            if(!pq.empty()){
                char c2= pq.top().second;
                int temp2=pq.top().first;
                s1+=c2;
                pq.pop();
                temp2--;
                if(temp2>0){
                    pq.push({temp2, c2});
                }
            }
            else {
                if(temp){
                    return "";
                }
            }
            if(temp>0){
                pq.push({temp, c});
            }
        }
        return s1;
    }
};