#include <bits/stdc++.h>
class Solution{
    public:
    std::string mergeAlternately(std::string &word1 , std::string &word2){
        int l1 =word1.length() , l2 = word2.length(),count =0,i =0 , j=0;
        std::string answer(l1+l2,'  ');
    
        while(i<l1 && j<l2){
            answer[count]=word1[i];
            i++;count++;
            answer[count]=word2[j];
            j++; count++;
        }
        while(i<l1){
            answer[count]=word1[i];
            i++;count++;
        }
        while(j<l2){
            answer[count]=word2[j];
            j++;count++;
        }
        return answer;
    }
};
int main(){
    std::string word1 , word2;
    std::cin>>word1>>word2;
    Solution sol;
    std::string answer = sol.mergeAlternately(word1,word2);
    std::cout<<answer<<std::endl;
}