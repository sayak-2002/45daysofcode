//Problem Name: Subarray sum divisible by k
//Problem Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size();
        int mod[k];
        memset(mod, 0, sizeof(mod));
        
        
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            
            mod[((sum % k) + k) % k]++;
        }
        
        int res = 0;
        for(int i=0; i<k; i++){
            if(mod[i] > 1)
                res += (mod[i] * (mod[i] - 1)) / 2;
        }
        res += mod[0];
        
        return res;
    }
};