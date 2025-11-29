#include bits/stdc++.h>
class Solution{
  public:
  int helper(std::vector<int> &nums){
    std::unordered_map<int,int> check ;
    for(int i = 0 ; i < nums.size() ; i ++){
      check[nums[i]]++;
    }
    int answer = -1 ;
    for(auto &pair : check){
      if(pair.second==1 && pair.first>answer){
        answer = pair.first;
      }
    }
    return answer;
  }
  int largestInteger(std::vector<int> &nums , int k){
    int data_count = nums.size() , a1 = nums[0] , a2 = nums[data_count-1] , ac=1, a2c=1, answer ;
    if(data_count == 1){return nums[0];}
    if(data_count == k){
        for(auto i : nums){
            if(i>answer){answer=i;}
        }
        return answer;
    }
    if(a1==a2  && k>1){return -1;}
    if(k==1){
      answer=helper(nums);
      return answer;
    }
    for(int i = 1 ; i <data_count-1; i++){
      if(nums[i]==a1||nums[i]==a2){
        nums[i]==a1?ac++:a2c++;
        nums[i]==a1?a1=INT_MIN:a2=INT_MIN;
      }
      if(ac>1 && a2c>1){return -1;}
    }
    if(a1>a2){return a1;}
    return a2;
  }
};
int main(){
  int data_count , data , k ;
  std::vector<int> nums ;
  std::cin>>data_count>>k;
  for(int i = 0 ; i < data_count ; i ++){
    std::cin>>data;
    nums.emplace_back(data);
  }
  Solution sol;
  std::cout<<sol.largestInteger(nums,k);
}
