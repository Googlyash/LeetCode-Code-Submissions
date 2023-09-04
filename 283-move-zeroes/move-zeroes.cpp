//Leetcode 75
//Sep'5, 2023 00:57 am

class Solution {
public:
    void moveZeroes(vector<int>&a) {
        int n=a.size();
        priority_queue<int, vector<int>, greater<int>>zeroes;
        for(int i=0;i<n;i++){
            if(a[i]==0)zeroes.push(i);
        }
        if(zeroes.empty())return;
        for(int i=0;i<n;i++){
            int pos=zeroes.top();
            // cout<<pos<<endl;
            if(pos<i && a[i]!=0){
                zeroes.pop();
                zeroes.push(i);
                swap(a[i], a[pos]);
            }
        }
        return ;
    }
};

//Time taken: 15:30 min!!