#include <bits/stdc++.h>
class Solution{
    public:
    int isAnagram(std::string &s , std::unordered_map<std::string , int> & check , int & index){
        int arr[26]= {0};
        for(int i = 0 ; i <s.length(); i ++){
            char temp = s[i];
            int data = temp-97;
            arr[data]++;
        }
        std::string key = "";
        for(int i = 0 ; i <26 ; i ++){
            if(arr[i] != 0){
                char temp = i + 97 ;
                std::string num_string = std:: to_string(arr[i]);
                key = key + temp + num_string;
            }
        }
        if(check.count(key)){
            return check[key];
        }
        else{
            check[key]=index;
            return -1;
        }
    }
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs){
        int data_count = strs.size();
        std::unordered_map<std::string,int> check ;
        std::vector<std::vector<std::string>> answer;
        int count = 0 ;
        for(int i = 0 ; i < data_count ; i ++){
            int res = isAnagram(strs[i], check, count);
            if(res==-1){
                std::vector<std::string> temp ={strs[i]};
                answer.emplace_back(temp);
                count ++;
            }
            else{
                answer[res].emplace_back(strs[i]);
            }
        }
        return answer;
    }
};
void print(std::vector<std::vector<std::string>> &answer){
    for(int i = 0 ; i <answer.size();i++){
        for(int j = 0 ; j < answer[i].size();j++){
            std::cout<<answer[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
int main(){
    int data_count ;
    std::string s ;
    std::vector<std::string> strs;
    Solution sol;
    std::cin>>data_count;
    for(int i = 0 ; i < data_count ; i ++){
        std::cin>>s ;
        strs.emplace_back(s);
    }
    std::vector<std::vector<std::string>> answer = sol.groupAnagrams(strs);
    print(answer);


}