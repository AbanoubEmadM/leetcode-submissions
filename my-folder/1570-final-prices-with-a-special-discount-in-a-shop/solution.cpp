class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
      vector<int> s1, discount;

    for (int i = 0; i < prices.size(); i++) {
       for (int j = i+1; j < prices.size(); j++) {
           if (prices[i] >= prices[j]) {
               discount.push_back(prices[i] - prices[j]);
               break;
           }
           if (j == prices.size() - 1) {discount.push_back(prices[i]);}
       }
    }
    discount.push_back(prices[prices.size()-1]);
    return discount;
    }
};
