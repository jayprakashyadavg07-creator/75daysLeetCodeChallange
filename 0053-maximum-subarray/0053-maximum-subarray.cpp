class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0,ms=INT_MIN;//if ms=0; eg-nums[-1] loss not 0 ms=INT_MIN; correct
        for(int i=0;i<nums.size();i++){
            cs=cs+nums[i];//current sum
            ms=max(cs,ms);//maximum
            if(cs<0){
                cs=0;
            }
        }
        return ms;
        
    }
};