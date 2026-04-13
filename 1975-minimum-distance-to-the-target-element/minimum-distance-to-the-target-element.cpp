class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size(), min = 999999;
        for (int i = 0; i < n; i++){
            if(nums[i] == target){
                int temp = abs(i - start);
                if( temp < min){
                    min = temp;
                }
            }
        }

        return min;
    }
};