//POTD Feb'17, 2024
//Feb'17, 2024 11:12 pm

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size(), ans=0;
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i=0;i<n-1;i++){
            int k=heights[i+1]-heights[i];
            if(k<=0){
                continue;
            }
            pq.push(k);
            if(pq.size()> ladders){
                bricks-= pq.top();
                pq.pop();
            }
            if(bricks<0){
                return i;
            }
        }
        return n-1;
    }
};

//53 min
//Comments