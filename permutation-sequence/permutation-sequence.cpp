//Striver: Recursion
//June'30 , 2023 10:36 pm
#include<bits/stdc++.h>
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>num;
        string s,s1;
        int fact=1;
        for(int i=1;i<=n;i++)num.push_back(i);
        for(int i=1;i<n;i++)fact*=i;
        int j=0;
        k--;
        while(1){
            int r=k/fact;
            s1+=to_string(num[r]);
            num.erase(num.begin()+k/fact);
            if(num.size()==0){
                break;
            }
            k%=fact;
            fact/=num.size();
        }
        // for(int i=0;i<n;i++){
        //     int r= k/fact;
        //     s1+=s[r];
        //     s.erase(s.begin()+r);
        //     if(s.size()==0)break;
        //     k-=r*(int)tgamma(n-i);
        //     fact/=s.size();
        // }
        return s1;
    }
};