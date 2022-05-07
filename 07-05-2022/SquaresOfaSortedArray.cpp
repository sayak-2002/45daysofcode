// Problem Name - Squares of a sorted array
// Problem Link - https://leetcode.com/problems/squares-of-a-sorted-array/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int low = 0;
        int high = n-1;
        int counter = n-1;
        
        while(low<=high){
            if(nums[low]*nums[low] > nums[high]*nums[high]){
                ans[counter] = nums[low]*nums[low];
                low++;
            }else{
                ans[counter] = nums[high]*nums[high];
                high--;
            }
            counter--;
        }
        return ans;
    }
};