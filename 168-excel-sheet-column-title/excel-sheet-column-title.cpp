//POTD Aug'22, 2023 
//Aug'22, 2023 11:01 am

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        while(columnNumber){
            columnNumber--;
            s+= (columnNumber)%26+ 'A';
            columnNumber/=26;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};