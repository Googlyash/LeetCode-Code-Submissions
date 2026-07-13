// POTD Jul'13, 2026
// Jul'13, 2026 11:37 pm

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int l= low, pos=0;
        while(l>9){
            l/=10;
            pos++;
        }

        long long first= l, add= pow(10, pos);
        long long start= add*first;
        cout<<first<<" "<<add<<" "<<start;
        vector<int>ans;
        while(start<=high && add<(1e10)){
            if(pos <= 9-first){
                long long cur= first;
                long long curPos= pos;
                while(curPos){
                    cur*=10;
                    cur+= first + (pos-curPos)+1;
                    curPos--;
                }
                first++;
                start+= add;
                cout<<cur<<endl;
                if(cur>high){
                    break;
                }
                if(cur>=low)ans.push_back(cur);
            }
            else {
                pos++;
                first=1;
                add*=10;
            }
            if(first==10){
                first= 1;
                add*=10;
            }
        }
        return ans;
    }
};

// 15 min