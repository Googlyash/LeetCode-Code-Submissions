//Sep'14, 2023 11:50 pm
//Cpmments

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

        unsigned int dvd= abs(dividend);
        unsigned int dvs= abs(divisor);
        unsigned int ans=0;
        while(dvd>= dvs){
            short temp=0;
            while(dvd> (dvs<<(++temp)));
            temp--;
            ans+=(1<<temp);
            dvd-= (dvs<<temp);
        }


        return (dividend>0)==( divisor>0)? ans: -ans;
    }
};