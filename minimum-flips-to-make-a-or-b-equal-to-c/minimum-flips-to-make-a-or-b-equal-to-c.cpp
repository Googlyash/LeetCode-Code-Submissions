class Solution {
public:
    int minFlips(int a, int b, int c) {
        int i=0,k=0,cnt=0;
        while(a || b || c)
        {
            if(c%2==1)
            {
                if(a%2==0 && b%2==0)cnt++;
            }
            else
            {
                if(a%2==1)cnt++;
                if(b%2==1)cnt++;
            }
            a/=2,b/=2,c/=2;
        }
        return cnt;
    }
};