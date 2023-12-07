//POTD Dec'7, 2023
//Dec'7, 2023 09:44 pm

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; --i)
            if ((num[i] - '0') % 2)
                return num.substr(0, i + 1);
        return string();
    }
};