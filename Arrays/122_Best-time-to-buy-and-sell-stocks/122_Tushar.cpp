#include <bits/stdc++.h>
class Solution{
    public:
    int maxProfit(std::vector<int> &prices){
        int data_count = prices.size() , curr=prices[0] , profit = 0 ;
        for(int i = 0 ; i < data_count ; i ++){
            if(prices[i]>curr){
                profit+= prices[i]-curr;
                curr = prices[i];
            }
            else if(prices[i]<curr){
                curr = prices[i];
            }
        }
        return profit;
    }
};
int main(){
    int data_count , data;
    std::vector<int> prices;
    Solution sol ;
    std::cin>>data_count;
    for(int i = 0 ; i < data_count ; i ++){
        std::cin>>data;
        prices.emplace_back(data);
    }
    std::cout<<sol.maxProfit(prices);
}