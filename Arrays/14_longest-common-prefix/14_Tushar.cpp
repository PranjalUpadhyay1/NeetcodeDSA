#include <bits/stdc++.h>
class Solution{
    public:
    std::string longestCommonPrefix(std::vector<std::string> &strs){
        int data_count = strs.size();
        std::string key = strs[0];
        for(int i = 1 ; i < data_count ; i ++){
              if(key==""){
                return key;
              }
            for(int j = 0 ; j < key.length();j++){
              if(key[j]!=strs[i][j]){
                key.resize(j);
              }
            }
        }    
        return key;
    }
};
int main(){
    int data_count ;
    std::string data;
    std::vector<std::string> strs;
    Solution sol;
    std::cin>>data_count;
    for(int i = 0 ; i < data_count ; i ++){
        std::cin>>data;
        strs.emplace_back(data);
    }
    data = sol.longestCommonPrefix(strs);
    std::cout<<data<<std::endl;
}