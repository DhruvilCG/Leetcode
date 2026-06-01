class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int price = 0;
        while (cost.size() > 2) {
            int i = cost.size();
            price = price + cost[i-1] + cost[i-2];
            cost.pop_back();
            cost.pop_back();
            cost.pop_back();
        }

        for (int i = 0; i < cost.size(); i++) {
            price += cost[i];
        }

        return price;
    }
};