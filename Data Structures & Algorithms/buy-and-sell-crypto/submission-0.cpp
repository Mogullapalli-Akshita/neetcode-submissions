class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        int le = prices.size();
        for(int i=0; i<le-1; i++)
        {
            for(int j=i+1; j<le; j++)
            {
                p = max(p, (prices[j]-prices[i]));
            }
        }
        return p;
    }
};
