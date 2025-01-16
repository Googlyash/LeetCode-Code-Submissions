// Jan'16, 2025 06:33 pm

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
    int l=0, h=1e9;
public:
    int guessNumber(int n) {
        l=1, h=n;

        while(l<=h){
            int mid= l+ (h-l)/2;
            int call= guess(mid);

            if(call==0){
                return mid;
            }
            else if(call==1){
                l=mid+1;
            }
            else if(call==-1){
                h=mid-1;
            }
        }
        return -1;
    }
};

// 9 min