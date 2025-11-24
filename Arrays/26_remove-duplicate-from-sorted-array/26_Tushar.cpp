#include <bits/stdc++.h>
class Solution {
    public:
    int removeDuplicates(std::vector<int> &nums){
        int curr = nums[0] , data_count = nums.size(), count =0, flag =0, index , flag2 =1;
        for(int i = 1 ; i < data_count ; i++){
            if(nums[i]==curr){
                count++;
                flag++;
                if(flag2){
                index = i;
                    flag2 =0;
                }
                
            }
            if(flag && nums[i]!=curr){
              nums[index] = nums[i];
              curr = nums[i];
              index++;
              flag--;
            }
            if(nums[i]!=curr){
                curr =nums[i];
                if(flag2==0){
                    nums[index]=curr;
                    index++;
                }
            }
        }
        return data_count - count;
    }
};
int main(){
    int data_count , data;
    std::vector<int> nums;
    std::cin>>data_count ;
    Solution sol;
    for(int i= 0; i< data_count ; i++ ){
        std::cin>>data;
        nums.emplace_back(data);
    }
    std::cout<<sol.removeDuplicates(nums);
    for(auto i: nums){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}