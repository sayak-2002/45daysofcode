//Problem Name - Best Time to Buy and Sell Stock II
//Problem Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// T.C = O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int net_profit = 0;
        
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>prices[i-1]){ 
                net_profit += (prices[i]-prices[i-1]);
            }
        }
        return net_profit;
    }
};