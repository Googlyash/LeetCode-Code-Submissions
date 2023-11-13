//POTD Nov'13, 2023
//Nov'13, 2023 09:42 pm
class Solution {
public:
    string sortVowels(string s) {
        int n=s.size(), j=0;
        vector<int>ind;
        string s1;
        for(int i=0;i<n;i++){
            char c= tolower(s[i]);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                ind.push_back(i);
                s1+=s[i];
            }
        }
        sort(s1.begin(), s1.end());
        for(int i=0;i<n;i++){
            if(j==ind.size()){
                break;
            }
            if(ind[j]==i){
                s[i]=s1[j];
                j++;
            }
        }
        return s;
    }
};