// Aug'19, 2025 10:56 pm

class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices< cheeseSlices*2 || tomatoSlices%2!=0 || tomatoSlices > cheeseSlices*4){
            return {};
        }

        int two= (cheeseSlices*4 - tomatoSlices)/2;
        int four= (tomatoSlices - two*2)/4;

        return {four, two};
    }
};

// 6 min