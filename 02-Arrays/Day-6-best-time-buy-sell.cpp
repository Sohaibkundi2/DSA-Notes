// find the maximum profit you can achieve by buying on one day and selling on another later day.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int bestBuy = prices[0];
        for(int i=0; i< prices.size(); i++){

            if(prices[i] > bestBuy){
                profit = max(profit, prices[i]- bestBuy);
            }
            bestBuy= min(bestBuy,prices[i]);
        }

        return profit;
    }
};