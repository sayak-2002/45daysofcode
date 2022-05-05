//Find the Duplicate Number

// link to the problem : https://leetcode.com/problems/find-the-duplicate-number/

// Hash Map Approch T.C = 0(n)


int findDuplicate(vector<int>& nums) {
    unordered_map<int, int> um;
    int ans = 0;
            
    for(int i=0; i<nums.size(); i++){
        um[nums[i]]++;
    }
    for(auto pr: um){
        if(pr.second > 1)
            ans = pr.first;
    }
        return ans;
}

