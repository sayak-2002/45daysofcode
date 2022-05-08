//Problem Name: Container With Most Water
//Problem Link: https://leetcode.com/problems/container-with-most-water/

//Problem Name - Container With Most Water
//Problem Link - https://leetcode.com/problems/container-with-most-water/


class Solution {
public:
    int area(vector<int> height, int i, int j){
            return min(height[i], height[j])*(j-i);
    }
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j=n-1;
        
        int maxArea = 0;
        while(i<j){
            int shorterLine = min(height[i], height[j]);
            maxArea = max(maxArea, shorterLine * (j - i));
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
               
        }   
        return maxArea;
    }
};