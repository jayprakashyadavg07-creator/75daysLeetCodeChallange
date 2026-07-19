class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int store = 0;
        for (int i = 0; i < nums.size(); i++) {
            store = store ^ nums[i];
        }
        return store;
    }
};