// POTD Oct'1, 2026
// Oct'1, 2026 09:59 pm

class Solution {
    public boolean isValid(String s) {
        int n1=0, n2=0, n3=0;

        Deque<Character> st= new ArrayDeque<>();
        for(char c: s.toCharArray()){
            System.out.println(c);
            if(c=='(' || c=='{' || c =='['){
                st.push(c);
            }
            else if(st.size() == 0){
                return false;
            }
            else if(c==')'){
                char last= st.peekFirst();
                System.out.println(last);
                if(last!='('){
                    return false;
                }
                st.removeFirst();
            }
            else if(c=='}'){
                char last= st.peekFirst();
                System.out.println(last);
                if(last!='{'){
                    return false;
                }
                st.removeFirst();
            }
            else if(c==']'){
                char last= st.peekFirst();
                System.out.println(last);
                if(last!='['){
                    return false;
                }
                st.removeFirst();
            }
        }
        if(st.size()!=0){
            return false;
        }
        return true;
    }
}

// 19 min
// 2nd code in java