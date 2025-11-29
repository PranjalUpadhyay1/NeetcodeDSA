#include <bits/stdc++.h>
class Solution {
    public:
    std::vector<int> majorityElement(std::vector<int> &nums){
        int data_count = nums.size() , c1 = 0 , c2 = 0 , num1=nums[0],num2=INT_MIN;
        std::vector<int> answer;
        for(int i = 0 ; i <data_count ; i ++){
            if(nums[i]!=num1 && nums[i]!=num2){
                if(num2==INT_MIN){
                    num2=nums[i];
                    c2++; continue;
                }
                std::cout<<c1<<" "<<c2<<std::endl;
                c1--;c2--;
                if(c1==-1 || c2==-1){
                  c1==-1?num1=nums[i]:num2=nums[i];
                  c1==-1?c2++:c1++;
                  c1==-1?c1=1:c2=1;
                }
            }
            else{
                num1==nums[i]?c1++:c2++;
            }
        }
        c1=0,c2=0;
        for(int i = 0 ; i < data_count ; i ++){
            if(nums[i]==num1){c1++;}
            if(nums[i]==num2){c2++;}
        }
        if(c1>=(data_count/3)+1){answer.emplace_back(num1);}
        if(c2>=(data_count/3)+1){answer.emplace_back(num2);}
        return answer;
    }
};
int main(){
    int data_count , data;
    std::vector<int> nums;
    Solution sol;
    std::cin>>data_count;
    for(int i = 0 ; i < data_count ; i ++){
        std::cin >>data;
        nums.emplace_back(data);
        
    }
    std::vector<int> answer = sol.majorityElement(nums);
    for(auto i : answer){
        std::cout<<i<<" ";
    }
}