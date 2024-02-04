//POTD Feb'4, 2024
//Feb'5, 2023 12:15 am

//Copying earlier Submission
//Sliding Window Best Question

class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(), ans=INT_MAX, idx=0, cnt=0,  i=0, j=0;
        unordered_map<char,int>mp;
        for(auto c:t){
            mp[c]++;
        }
        cnt=mp.size();
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    cnt--;
                }
            }
            while(cnt==0){
                if(ans>j-i+1){
                    ans=j-i+1;
                    idx=i;
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                        cnt++;
                    }
                }
                i++;
            }
            j++;
        }
        return ans>n?"": s.substr(idx, ans);
    }
};

//Shortest Code in comments:

/*
                        string minWindow(string s, string t) {
                                vector<int> map(128,0);
                                for(auto c: t) map[c]++;
                                int counter=t.size(), begin=0, end=0, d=INT_MAX, head=0;
                                while(end<s.size()){
                                    if(map[s[end++]]-->0) counter--; //in t
                                    while(counter==0){ //valid
                                        if(end-begin<d)  d=end-(head=begin);
                                        if(map[s[begin++]]++==0) counter++;  //make it invalid
                                    }  
                                }
                                return d==INT_MAX? "":s.substr(head, d);
                            }
*/