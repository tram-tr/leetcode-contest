class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n = reward1.size();
        vector<pair<int, int>> reward;
        
        for (int i = 0; i < n; i++) {
            int diff = reward1[i] - reward2[i];
            reward.push_back({diff,i});
        }
        
        sort(reward.begin(), reward.end(), greater<pair<int, int>>());
        int res = 0;
        for (int i = 0; i < k; i++) 
            res += reward1[reward[i].second];
        for (int i = k; i < reward.size(); i++) 
            res += reward2[reward[i].second];
        return res;
    }
};
