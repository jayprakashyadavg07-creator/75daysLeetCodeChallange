class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {

            // i ko duplicate skip [-1,-1] kunai aauta value pick mara garne
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0) {
                    j++;
                }

                else if(sum > 0) {
                    k--;
                }

                else {

                    // answer store garna lai
                    ans.push_back({nums[i], nums[j], nums[k]});

                    // duplicate skip for  j
                    while(j < k && nums[j] == nums[j+1]) {
                        j++;
                    }
                        // duplicate skip for k
                    while(j < k && nums[k] == nums[k-1]) {
                        k--;
                    }

                    j++;
                    k--;
                }
            }
        }

        return ans;
    }
};