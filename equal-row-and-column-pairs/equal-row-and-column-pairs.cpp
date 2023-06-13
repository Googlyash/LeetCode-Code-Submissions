struct VectorHasher {
    int operator()(const vector<int> &V) const {
        int hash = V.size();
        for(auto &i : V) {
            hash^=i;
        }
        return hash;
    }
};



class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        // Number to store the count of equal pairs.
        int ans = 0;
        unordered_map<vector<int>,int,VectorHasher> mp;
        // Storing each row int he map
        for (int i = 0; i < grid.size(); i++)
            mp[grid[i]]++;
        
        for (int i = 0; i < grid[0].size(); i++)
        {
            vector<int> v;
            // extracting column in a vector.
            for (int j = 0; j < grid.size(); j++)
                v.push_back(grid[j][i]);
            // Add the number of times that column appeared as a row.
            auto it = mp.find(v); 
            if (it != mp.end()) ans += it->second;
        }
        // Return the number of count
        return ans;
    }
};