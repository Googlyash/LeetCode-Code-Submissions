//Striver SDE: Day15 String
//Sep'14, 2023 07:09 pm

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=a.size(), m=b.size();
        if(m<=n){
            if(a.find(b)!=string::npos){
                return 1;
            }
            string s=a+a;
            if(s.find(b)!=string::npos)
            return 2;
            return -1;
        }
        string s;
        if(a==b){
            return 1;
        }
        for(int i=0;i<m/n; i++){
            s+=a;
        }
        if(m%n >0)s+=a;
        // cout<<m/n<<" "<<(m%n)?1:0 ;
        // cout<<"\n";
        cout<<s;
        if(s.find(b)!=string::npos){
            return s.size()/n;
        }
        else {
            s+=a;
            if(s.find(b)!=string::npos){
                return s.size()/n;
            }
            return -1;
        }
    }
};