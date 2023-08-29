//POTD Aug'29, 2023
//Aug'29, 2023 10:13 am

class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        int cur= count(customers.begin(), customers.end(), 'Y');
        int mn=cur, hour=0;

        for(int i=0;i<n;i++){
            cur+= customers[i]=='N'?1: -1;

            if(cur<mn){
                mn=cur;
                hour=i+1;
            }
        }
        return hour;
    }
};

//15:24 Time taken
//Earlier solved
//Editorial