#include <bits/stdc++.h>
class Solution{
    public:
    bool isAnagram(std::string &s1, std::string &s2){
        if(s1.length()!=s2.length()){
            return true;
        }
        int arr[26]= {0};
        for(int i = 0 ; i <s1.length(); i ++){
            int data1 = s1[i] - 97;
            int data2 = s2[i] - 97;
            arr[data1]++;
            arr[data2]--;
        }
        for(int i = 0 ; i <26 ; i ++){
            if(arr[i]!=0){
                return true;
            }
        }
        return false;
    }
};
int main(){
    std::string s1 ,s2 ;
    Solution sol;
    std::cin>>s1>>s2;
    if(sol.isAnagram(s1,s2)){
        std::cout<<"not anagrams"<<std::endl;
    }
    else{
        std::cout<<"anagrams"<<std::endl;
    }
    


}