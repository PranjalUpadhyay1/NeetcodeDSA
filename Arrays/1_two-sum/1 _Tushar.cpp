#include <bits/stdc++.h>
class Solution{
    public:
    std::vector<int> twoSum(std::vector<int> &nums, int target){
        int data_count = nums.size();
        std::unordered_map<int,std::pair<int,int>> check;
        std::vector<int> answer = {0,0};
        for(int i = 0 ; i < data_count; i++){
            std::pair<int,int> info;
            int number = nums[i];
            int mod = target-nums[i];
            if(check.count(mod)){
                answer[0]=check[mod].second;
                answer[1]=i;
                return answer;
            }
            if(check.find(number)!=check.end()){
                continue;
            }
            check[number].first = mod;
            check[number].second = i;
        }
        return answer;
    }
};

int main(){
  int data_count, data, target;
  std::vector<int> nums;
  Solution sol;
  std::cin>>data_count>>target;
  for(int i = 0 ; i < data_count ; i++){
      
    std::cin>>data;
    nums.emplace_back(data);
  }
  std::vector<int> answer = sol.twoSum(nums,target);
  if(answer[0] == answer[1] ){
    std::cout<<"Failed"<<std::endl;
    std::cout<<"["<<answer[0]<<","<<answer[1]<<"]"<<std::endl;
  }
  else{
      std::cout<<"["<<answer[0]<<","<<answer[1]<<"]"<<std::endl;
    }
}