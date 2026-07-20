class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxwater=0;
        while(i<j){
            int w=j-i;// ✅ index
            int h=min(height[i],height[j]);// ✅ pillar height
            int area=w*h;
            maxwater=max(maxwater,area);
            if(height[i]>height[j]){
                j--;

            }else{
                i++;
            }
        }
        return maxwater;
    }
};