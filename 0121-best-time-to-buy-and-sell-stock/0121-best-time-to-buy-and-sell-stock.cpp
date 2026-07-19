class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int bb = prices[0]; // सबैभन्दा सानो buying price
        int mp = 0;         // maximum profit

        for(int i = 1; i < prices.size(); i++) {
            
            bb = min(bb, prices[i]); // सानो buying price खोज्ने
            
            mp = max(mp, prices[i] - bb); // profit calculate गर्ने
        }

        return mp;
    }
};