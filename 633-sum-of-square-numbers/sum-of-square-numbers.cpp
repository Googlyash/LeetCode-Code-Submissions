//POTD June'17, 2024
//June'17, 2024 10:54 pm

class Solution {
public:
    bool judgeSquareSum(int c) {
        int a=0;
        for(long i=0;i<1e5;i++){
            if(i*i >c){
                return false;
            }
            int rem= c-i*i;
            int sqr=sqrt(rem);
            if(sqr* sqr==rem){
                return true;
            }
        }
        return false;

    }
};

//6 min