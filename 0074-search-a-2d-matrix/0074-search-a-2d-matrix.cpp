class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();//row=3
        int n=matrix[0].size();//column=4 n=4;
        int start=0;//
        int end=m*n-1;//4*3-1=>12-1=>11 
        while(start<=end){
           int mid=start+(end-start)/2;//0+(11-0)/2=5
           if(matrix[mid/n][mid%n]>target){//mid/n][mid%n]=>5/4=1,5%2=1;[1][1]=1>3 no
            end=mid-1;
           } else if(matrix[mid/n][mid%n]<target){
            start=mid+1;
           }else{
            return true;
           }
        }
        return false;

    }
};