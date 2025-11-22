#include <bits/stdc++.h>
class Solution{
    public:
    int majorityElement(std::vector<int> &nums){
        int data_count = nums.size(), count = 1 , curr = nums[0];
        for(int i = 1 ; i < data_count ; i ++){
            if(nums[i]!= curr){
                count--;
            }
	    else{count++;}
            if(count == -1){
                curr = nums[i];
                count = 1 ;
            }
        }
    return curr;
    }
    
};
int main(){
    int data_count , data;
    std::vector<int> nums;
    std::cin>>data_count;
    Solution sol;
    for (int i = 0 ; i < data_count ; i ++ ){
        std::cin>>data;
        nums.emplace_back(data);
    }
    std::cout<<sol.majorityElement(nums);
}