class Solution {
public:
    vector<string> summaryRanges(vector<int>& v) {
        vector<string>a;
        if(v.size()==0)return a;
        int l=v[0],r=v[0];
        for(int i=1;i<v.size();i++)
        {
            if(v[i]!=(v[i-1]+1)){
                string s;
                s+= to_string(l);
                if(l!=r)s+="->";
                if(l!=r)s+=to_string(r);
                r=v[i];
                l=v[i];
                a.push_back(s);
            }
            else
            {
                r=v[i];
            }
        }
        string s= to_string(l);
        if(l!=r)s+="->";
        if(l!=r)s+=to_string(r);
        a.push_back(s);
        return a;
    }
};