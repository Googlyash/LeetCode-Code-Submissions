// Jan'4, 2024 02:51 pm


class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();

        if((1LL)*m*(1LL)*k> n){
            return -1;
        }
        int left=1, right= 1e9+7;
        while(left<= right){
            int mid= left+ (right - left)/2;
            int adj=0, bouq=0;

            for(int i=0;i<n;i++){
                if(bloomDay[i]> mid){
                    adj=0;
                }
                else if(++adj >=k){
                    adj=0;
                    bouq++;
                }
            }

            if(bouq>=m){
                right= mid-1;
            }
            else {
                left= mid+1;
            }
        }

        return left;
    }
};