// Oct'6, 2026 10:51 pm

class Solution {
    public int minSwaps(String s) {
        int n= s.length();

        int toSwap=0, open=0;
        for(int i=0;i<n;i++){
            char c= s.charAt(i);
            if(c=='['){
                open++;
            }
            else {
                if(open==0){
                    toSwap++;
                }
                else {
                    open--;
                }
            }
        }
        return (toSwap+1)/2;
    }
}

// 5 min
// 9th Java submission