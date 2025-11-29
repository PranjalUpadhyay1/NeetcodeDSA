#include <bits/stdc++.h>
class Solution {
  public:
  bool helper(std::unordered_map<int,int> &check , std::vector<int>&nums , int k){
    for (int i = 0 ; i < k ; i ++){
      check[nums[i]]++;
      if(check[nums[i]]>1){return true;}
    }
    return false;
  }
  bool containsNearbyDuplicate(std::vector<int> &nums , int k){
    std::unordered_map<int,int> check ;
    int data_count = nums.size() ;
    if(k==0){return false;}
    if(data_count<=k+1?helper(check,nums,data_count):helper(check,nums,k+1)){return true;}
    for(int i = k+1 ; i < data_count ; i++){
      check.erase(nums[i-k-1]);
      check[nums[i]]++;
      if(check[nums[i]]>1){return true;}
    }
    return false;    
  }
};
int main(){
  int data_count , data , k;
  std::vector<int> nums ;
  std::cin>>data_count >>k;
  for(int i = 0 ; i <data_count ;  i ++){
    std::cin>>data;
    nums.emplace_back(data);
  }
  Solution sol;
  if(sol.containsNearbyDuplicate(nums,k)){
    std::cout<<"yes";
  }
  else{
    std::cout<<"no";
  }
}
