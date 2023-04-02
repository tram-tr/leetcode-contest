class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;

        for (int num : nums) {
            bool placed = false;
            for (auto& row : result) {
                if (find(row.begin(), row.end(), num) == row.end()) {
                    row.push_back(num);
                    placed = true;
                    break;
                }
            }
            if (!placed) {
                result.push_back({num});
            }
        }
        
        return result;
    }
};
