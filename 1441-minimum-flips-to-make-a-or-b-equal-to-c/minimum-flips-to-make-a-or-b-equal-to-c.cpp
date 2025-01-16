// Jan'16, 2025 12:50 pm

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int orn= a|b;

        string sc, sor, sa, sb;
        int temp=a;
        while(temp){
            sa+= temp%2+'0';
            temp/=2;
        }
        temp=b;
        while(temp){
            sb+= (temp%2+'0');
            temp/=2;
        }
        temp=c;
        while(temp){
            sc+= (temp%2+'0');
            temp/=2;
        }
        temp=orn;
        while(temp){
            sor+= (temp%2+'0');
            temp/=2;
        }
        
        int ans=0;
        for(int i=0;i<min(sc.size(), sor.size()); i++){
            if(sc[i]== sor[i]){
                continue;
            }
            else if(sc[i]=='0'){
                if(sa.size()>i){
                    ans+= (sa[i]-'0');
                }
                if(sb.size()>i){
                    ans+= sb[i]-'0';
                }
            }
            else if(sc[i]=='1'){
                ans++;
            }
        }

        if(sor.size()> sc.size()){
            for(int i=sc.size(); i<sor.size(); i++){
                if(sor[i]=='1'){
                    if(sa.size()>i){
                        ans+= (sa[i]-'0');
                    }
                    if(sb.size()>i){
                        ans+= sb[i]-'0';
                    }
                }
            }
        }
        else {
            for(int i=sor.size(); i<sc.size(); i++){
                ans+= (sc[i]=='1');
            }
        }

        return ans;
    }
};

// 22 min