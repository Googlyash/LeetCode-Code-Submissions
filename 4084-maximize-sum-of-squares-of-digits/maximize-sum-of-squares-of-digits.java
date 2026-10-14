// POTD Oct'14, 2026
// Oct'15, 2026 12:57 am

class Solution {
    public String maxSumOfSquares(int num, int sum) {
        if(sum> num*9){
            return "";
        }

        StringBuilder sb= new StringBuilder();
        for(int i=0;i<num;i++){
            if(sum>=9){
                sb.append(9);
                sum-=9;
            }
            else {
                sb.append(sum);
                sum=0;
            }
        }
        return sb.toString();
    }
}

// 33 min
// 12th Java submission