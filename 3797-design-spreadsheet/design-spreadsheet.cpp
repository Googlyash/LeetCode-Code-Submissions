// POTD Sep'19, 2025
// Sep'19, 2025 07:49 pm

class Spreadsheet {
    vector<vector<long>>sheet;
public:
    Spreadsheet(int rows) {
        sheet.resize(26, vector<long>(rows+1, 0));
    }
    
    void setCell(string cell, int value) {
        char c= cell[0];
        cell.erase(0, 1);

        long row= stoi(cell);
        if(sheet[c-'A'].size()<=row){
            return;
        }
        sheet[c-'A'][row]= value;
    }
    
    void resetCell(string cell) {
        char c= cell[0];
        cell.erase(0, 1);
        long row= stoi(cell);
        if(sheet[c-'A'].size()<=row){
            return;
        }
        sheet[c-'A'][row]= 0;
    }
    
    int getValue(string formula) {
        formula.erase(0, 1);

        char c= formula[0];
        if(c>='A' && c<='Z'){
            formula.erase(0, 1);
            string s;
            for(auto it:formula){
                if(it=='+'){
                    break;
                }
                s+=it;
            }
            long a= stoi(s);
            formula.erase(0, s.size()+1);
            char e= formula[0];
            long b=0;
            if(e>='A' && e<='Z'){
                formula.erase(0, 1);
                long d= stoi(formula);
                if(sheet[e-'A'].size()<=d){
                    return 0;
                }
                b= sheet[e-'A'][d];
            }
            else {
                b= stoi(formula);
            }
            if(sheet[c-'A'].size()<=a){
                return b;
            }
            return sheet[c-'A'][a] + b;
        }
        else {
            string s;
            for(auto c:formula){
                if(c=='+'){
                    break;
                }
                s+=c;
            }
            long a= stoi(s);
            formula.erase(0, s.size()+1);
            char e= formula[0];
            long b=0;
            if(e>='A' && e<='Z'){
                formula.erase(0, 1);
                long d= stoi(formula);
                if(sheet[e-'A'].size()<=d){
                    return 0;
                }
                b= sheet[e-'A'][d];
            }
            else {
                b= stoi(formula);
            }
            return a + b;
        }

        return 0;
    }
};

// 28 min

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */