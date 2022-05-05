// Problem Name - Remove Duplicates from Sorted Array
// Problem Link - https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// TC - O(nlogn)
 


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j  = i+1;
        
        while(j < nums.size() && i < nums.size()){    
            while(j < nums.size() && nums[i] == nums[j]){
                j++;
            }
            if(j < nums.size()){ 
                nums[++i] = nums[j];
            }
        }
        return i+1;
    }
};