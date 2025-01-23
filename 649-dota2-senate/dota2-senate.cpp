// Jan'23, 2025 05:10 pm

class Solution {
public:
    string predictPartyVictory(string senate) {
        int n= senate.size();
        string r= "Radiant", d= "Dire";
        queue<int>qr, qd;

        for(int i=0;i<n;i++){
            if(senate[i]=='R'){
                qr.push(i);
            }
            else {
                qd.push(i);
            }
        }    queue<int>qr1, qd1;

        while(!qd.empty() && !qr.empty()){
            int ri= qr.front();
            int rd= qd.front();

            if(ri>rd){
                qd.push(n++);
            }
            else {
                qr.push(n++);
            }
            qr.pop(), qd.pop();
        }


        if(qr.empty()){
            return d;
        }
        return r;
    }
};

// 48 min
// Comments helped