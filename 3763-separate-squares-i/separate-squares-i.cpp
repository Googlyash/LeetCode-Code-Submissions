// POTD Jan'13, 2025
// Jan'14, 2025 02:23 am

class Solution {
    double area_calc(vector<vector<int>>& squares,const double y){
        double area=0;

        for(auto& it: squares){
            double side= it[2], y0= it[1]+ it[2];

            if(y>=y0){
                continue;
            }

            double height= min(side, y0-y);
            area+= side*height;
        }
        return area;
    }
public:
    double separateSquares(vector<vector<int>>& squares) {
        int n= squares.size();

        double totArea= (area_calc(squares, -1e9)/2.0);

        double l=INT_MAX, r= INT_MIN, epsilon= 1e-5;
        for(auto& it: squares){
            double side= it[2], y= it[1];

            l= min(l, y);
            r= max(r, y+side);
        }
        while(epsilon<r-l){
            double mid=  ((r+l)/2);
            double area= area_calc(squares, mid);

            if(area> totArea){
                l= mid;
            }
            else {
                r= mid;
            }
        }
        return l;
    }
};

// 33 min