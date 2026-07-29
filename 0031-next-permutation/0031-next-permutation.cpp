class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        // pivot patta laune decresing side bata   1,(2)<-5,4,3
        for (int i = n - 1; i > 0; i--) {//          yo 2 pivot vayo
            if (nums[i] > nums[i - 1]) {
                pivot = i - 1;
                break;
            }
        }

        //pivot vetena vane reverse  gardinu yesto case ma [5,4,3,2,1] yo ma 
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the next greater element
        for (int j = n - 1; j > pivot; j--) {
            if (nums[j] > nums[pivot]) {
                swap(nums[j], nums[pivot]);
                break;
            }
        }

        // Reverse the suffix//[1,2,,5,4,3] pivot k ho 2 aaba 2 paxi vaneko pivot+1 ho matlb 5 ,4,3 shor garn code le hunxa 3,4,5 end samma 
        reverse(nums.begin() + pivot + 1, nums.end());//reverse(nums.begin() + 2, nums.end());
    }
};