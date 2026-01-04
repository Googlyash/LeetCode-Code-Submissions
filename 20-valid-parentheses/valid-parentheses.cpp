// Stack Queue practice
// Jan'4, 2025 09:51 pm

class Solution {
public:
    bool isValid(string s) {
        int n= s.size();

        stack<char>st;
        for(auto c: s){
            if(c=='(' || c== '[' || c=='{'){
                st.push(c);
            }
            else {
                if(st.empty()){
                    return false;
                }
                char top= st.top();
                if((c==')' && top!='(') || (c==']' && top!='[') || (c=='}' && top!='{')){
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};

// Switch 2
// 4 min