#include <bits/stdc++.h>
class Solution{
    public:
    void reverseString(std::vector<char> &s){
        int i = 0 , j = s.size()-1;
        while(i<j){
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;j--;
        }
    }
};
int main(){
    int data_count;
    std::vector<char> s;
    std::cin>>data_count;
    for(int i = 0 ; i < data_count ; i ++){
        char temp ;
        std::cin>>temp;
        s.emplace_back(temp);
    }
    Solution sol;
    sol.reverseString(s);
    for(auto i : s){
        std::cout<<i;
    }
    std::cout<<std::endl;
}