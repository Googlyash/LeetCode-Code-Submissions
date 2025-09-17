// POTD Sep'17, 2025
// Sep'17, 2025 07:37 pm

class FoodRatings {
    struct ComparePairs{
        bool operator()(const pair<int, string>&a, const pair<int, string>&b){
            if(a.first != b.first){
                return a.first < b.first;
            }
            return a.second > b.second;
        }
    };
    map<string, priority_queue<pair<int, string>, vector<pair<int, string>>, ComparePairs>>cuisineSorted;
    map<string, int> foodRating;
    map<string, vector<string>>foodsCuisine;

public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n= foods.size();
        for(int i=0;i<n;i++){
            cuisineSorted[cuisines[i]].push({ratings[i], foods[i]});
            foodRating[foods[i]]= ratings[i];
            foodsCuisine[foods[i]].push_back(cuisines[i]);
        }
    }
    
    void changeRating(string food, int newRating) {
        foodRating[food]= newRating;
        for(auto it:foodsCuisine[food]){
            cuisineSorted[it].push({newRating, food});
        }
    }
    
    string highestRated(string cuisine) {
        if(cuisineSorted.find(cuisine)== cuisineSorted.end() || cuisineSorted[cuisine].size()==0){
            return "null";
        }

        while(cuisineSorted[cuisine].size()!=0 && cuisineSorted[cuisine].top().first!= foodRating[cuisineSorted[cuisine].top().second]){
            string food= cuisineSorted[cuisine].top().second;
            cuisineSorted[cuisine].pop();
            cuisineSorted[cuisine].push({foodRating[food], food});
        }
        return cuisineSorted[cuisine].top().second;
    }
};

// 40 min
/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */