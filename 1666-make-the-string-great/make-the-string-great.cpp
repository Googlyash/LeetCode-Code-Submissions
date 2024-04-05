//POTD Apr'5, 2024
//Apr'5, 2024 11:59 pm

class Solution {
public:
    std::string makeGood(std::string s) {
        std::stack<char> stack;
        
        for (char c : s) {
            if (!stack.empty() && std::abs(c - stack.top()) == 32) {
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        
        std::string result;
        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }
        
        return result;
    }
};

//Comments