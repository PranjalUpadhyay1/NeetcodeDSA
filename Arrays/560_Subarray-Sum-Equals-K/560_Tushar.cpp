#include <bits/stdc++.h>
class Solution{
    public:
    int subarraySum(std::vector<int> &nums , int k){
        std::unordered_map<int,int> check ;
        int sum = 0 , data_count = nums.size() , answer = 0 ;
        check[0]++;
        for(int i = 0 ; i < data_count ; i ++){
            sum+=nums[i];
            //std::cout<<sum<<" ";
            if(check.count(sum-k)){
                std::cout<<check[sum-k]<<" "<<sum<<" "<<check[sum]<<std::endl;
                answer+=check[sum-k]*check[sum];
            }
            check[sum]++;
        }
        
        // for(auto &pair : check){
        // }
        return answer;
    }
};
int main(){
    int data_count , data , target;
    std::vector<int> nums;
    Solution sol;
    std::cin>>data_count>>target;
    for(int i = 0 ; i <data_count ; i++){
        std::cin>>data;
        nums.emplace_back(data);
    }
    std::cout<<sol.subarraySum(nums,target);
}