//Striver: Recursion
//Self-solved
//June'30, 2023 10:41 pm
class Solution {
public:
    string getPermutation(int n, int k) {
        string s;
        for(int i=1;i<=n;i++)s+=i+'0';
        sort(s.begin(), s.end());                            //sort(s, s+n); doesn't work in strings!!
        int i=0;
        do{
            i++;
            if(i>=k)break;
        }while( next_permutation(s.begin(),s.end()));
        return s;
    }
};