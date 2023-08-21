//POTD Aug'21 2023
//Aug'21, 2023 07:32 pm
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        return (s+s).substr(1,s.size()*2-2).find(s)!=-1;
    }
};

//Comments