// Problem Name: Find all duplicates in an array
// Problem Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map <int, int> um;
        vector<int> v;
        
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        
        for(auto x: um){
            if(x.second > 1)
                v.push_back(x.first);
        }
        return v;
    }
};