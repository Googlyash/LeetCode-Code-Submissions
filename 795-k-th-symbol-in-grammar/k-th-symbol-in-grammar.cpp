//POTD Oct'25, 2023
//Oct'25, 2023 03:46 pm

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==0)return 0;
        if(k%2==0) return (kthGrammar(n-1, k/2)==0) ?1 :0;
        else return (kthGrammar(n-1, (k+1)/2)==0) ?0 :1;
    }
};

//Comments: after 28 min