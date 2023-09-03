//Weekly Contest-361 Sep'3, 2023

class Solution {
private:
        bool check(int n)
        {
            int reverse = 0;
            int temp = n, ans=0,cur=0;
            while (temp != 0) {
                ans++;
                temp/=10;
            }
            if(ans%2)return false;
            temp=n;
            while(temp!=0){
                if(cur<ans/2){
                    reverse+=temp%10;
                }
                else{
                    reverse-=temp%10;
                }
                cur++;
                temp/=10;
            }
            return (reverse== 0);
        }
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        
        for(int i=low;i<=high;i++){
            if(check(i)){
                ans++;
            }
        }
        return ans;
    }
};