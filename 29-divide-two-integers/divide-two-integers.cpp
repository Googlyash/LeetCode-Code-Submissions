//Sep'14, 2023 11:35 pm

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==dividend){
            return 1;
        }
        if( dividend== INT_MIN && divisor==-1){
            return INT_MAX;
        }
        if(dividend== INT_MIN && divisor==1){
            return INT_MIN;
        }

        unsigned int a= abs(dividend);
        unsigned int b= abs(divisor);
        unsigned int ans=0;
        while(a>= b){
            short q=0;
            while(a> (b<<(q+1))){
                q++;
            }
            ans+=(1<<q);
            a-= (b<<q);
        }


        return (dividend>0)==( divisor>0)? ans: -ans;
    }
};