//POTD Oct'6, 2023
//Oct'6, 2023 02:21 pm

int solve(int i, int n){
    if(n<0){
        return -1e2;
    }
    if(i>n){
        return n;
    }

    int ans=max(max(solve(i+1, n), i*solve(i+1, n-i)), i*solve(i, n-i));
    return ans;
}
class Solution {
public:
    int integerBreak(int n) {
        // int k=0, div=sqrt(n), ans=1;
        if(n==2)return 1;
        if(n==3)return 2;
        // while(k<n-div*2){
        //     ans*=div, k+=div;
        //     cout<<k<<endl;
        // }

        // if(k<n)ans*=(n-k);
        // return ans;
        return solve(1, n);
    }
};