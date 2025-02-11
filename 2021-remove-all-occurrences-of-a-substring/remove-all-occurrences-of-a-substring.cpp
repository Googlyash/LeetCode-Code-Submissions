// POTD Feb'11, 2025
// Feb'11, 2025 09:30 pm

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n= s.size(), m=part.size();
        
        string x= s;
        int j=0;

        for(int i=0;i<n;i++){
            x[j++]= s[i];

            if(j>=m && x.substr(j-m, m)==part){
                j-=m;
            }
        }

        return x.substr(0, j);
    }
};

// Comments
// 30 min
