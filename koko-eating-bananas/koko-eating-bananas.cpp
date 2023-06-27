//Striver: BinarySearch
//Self Solved
#include<bits/stdc++.h>
class Solution {
public:
    int detHrs(vector<int>&a, int speed,int h){
        long long hrs=0,k=0;
        for(int i=0;i<a.size();i++){
            if(k>0){
                hrs+=(k-1)/speed+1;
                k=0;
            }
            k=a[i];
        }
        if(k>0)hrs+=(k-1)/speed+1;
        return hrs<=h;
    }
    int minEatingSpeed(vector<int>& a, int h) {
        int n=a.size();
        long mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(mx<a[i])mx=a[i];
        }
        int l=1,r=mx;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            long long hrs= detHrs(a,mid,h);
            if(hrs==1){
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        return l;
    }
};