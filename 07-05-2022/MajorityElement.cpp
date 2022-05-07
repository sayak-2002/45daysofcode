Problem Name: Majority Element
Problem Link: https://leetcode.com/problems/majority-element/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0, v=0;
        for(auto a: nums){
            if(v==0) c=a;
            if(c==a) v++;
            else v--;
        }
        return c;
    }
};