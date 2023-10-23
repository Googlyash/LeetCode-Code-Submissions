//POTD Oct'23, 2023
//Pct'23, 2023 04:28 pm

class Solution {
public:
    bool isPowerOfFour(int n) {
        // string s;
        if(n==1)return true;
        if(n<1 || n%4)return false;
        return isPowerOfFour(n/4);
        // while(n){
        //     s+=n%2+'0';
        //     n/=2;
        // }
        // reverse(s.begin(), s.end());
        // cout<<s;
        // for(int i=0;i<s.size();i++){
        //     if(i%2==0){
        //         continue;
        //     }
        //     if(s[i]=='1'){
        //         return false;
        //     }
        // }

        // // if(n==0)return false;
        // // if(n==1)return true;
        // // while(abs(n)>3){
        // //     int k=n%4;
        // //     cout<<k;
        // //     if(k>0){
        // //         return false;
        // //     }
        // //     n/=4;
        // // }
        return true;
    }
};

//15 min