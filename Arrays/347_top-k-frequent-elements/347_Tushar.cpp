#include <bits/stdc++.h>
class Solution{
    public:
    std::vector<int> topKFrequesnt(std::vector<int> &nums , int target){
        std::unordered_map <int , std::pair<int,int>> check ;
        int data_count = nums.size();
        std::vector<std::pair<int,int>> store;
        std::vector<int> answer;
        for(int i = 0 ; i < data_count ; i ++){
            check[nums[i]].first++;
            check[nums[i]].second = nums[i];
        }
        for(auto &pair :check){
            store.emplace_back(pair.second);
            std::cout<<pair.first;
            std::cout<<" "<<pair.second.first<<" "<<pair.second.second<<std::endl;
        }
        for(int i = 0 ; i < store.size() ; i ++){
            std::cout<<store[i].first<<","<<store[i].second<<" "<<std::endl;
        }
        std::sort(store.begin(),store.end());
        for(int i = 0 ; i < target ; i ++){
            answer.emplace_back(store[store.size()-i-1].second);
        }
        return answer;
        
    }
};
void print(std::vector<int> &answer){
    for(int i = 0 ;i <answer.size();i++){
        std::cout<<answer[i]<<" ";
    }
}
int main(){
    int data_count , data , target;
    std::vector<int> nums;
    Solution sol;
    std::cin>>data_count>>target;
    for(int i = 0 ; i < data_count ; i ++){
        std::cin>>data;
        nums.emplace_back(data);
    }
    std::vector<int> answer = sol.topKFrequesnt(nums,target);
    print(answer);
    
}