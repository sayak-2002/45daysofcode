//Problem Name - Best Time to Buy and Sell Stock 
//Problem Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// T.C = O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c = INT_MAX;
        int a = 0;
        int b = 0;
        
        for(int i = 0; i < prices.size(); i++){
            
            c = min(c, prices[i]);
            b = prices[i] - c;
            if(a < b){
                a = b;
            }
        }
        return a;
    }
};