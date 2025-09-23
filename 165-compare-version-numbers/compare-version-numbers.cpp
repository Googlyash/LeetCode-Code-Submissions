// POTD Sep'23, 2025
// Sep'23, 2025 12:20 am

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n= version1.size(), m=version2.size();

        vector<int>one, two;
        string s;
        for(int i=0;i<n;i++){
            if(version1[i]=='.'){
                int cur= stoi(s);
                one.push_back(cur);
                s.erase();
            }
            else {
                s+= version1[i];
            }
        }
        if(!s.empty()){
            int cur= stoi(s);
            one.push_back(cur);
            s.erase();
        }

        for(int i=0;i<m;i++){
            if(version2[i]=='.'){
                int cur= stoi(s);
                two.push_back(cur);
                s.erase();
            }
            else {
                s+= version2[i];
            }
        }
        if(!s.empty()){
            int cur= stoi(s);
            two.push_back(cur);
            s.erase();
        }

        int nv= one.size(), mv= two.size(), i=0;
        for(i=0; i<min(nv, mv); i++){
            if(one[i]> two[i]){
                return 1;
            }
            else if(one[i] < two[i]){
                return -1;
            }
        }

        while(i<nv){
            if(one[i++]!=0){
                return 1;
            }
        }
        while(i<mv){
            if(two[i++] != 0){
                return -1;
            }
        }
        return 0;
    }
};

// 15 min