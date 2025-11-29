#include <bits/stdc++.h>
class Solution{
  public:
  bool isValid(std::string &s){
    int data_count = s.length();
    if(data_count%2 == 1){return false;}
    if(data_count==0){return true;}
    std::stack<char> check; check.emplace(s[0]);
    for(int i = 1 ; i < data_count ; i ++){
      if(check.empty()){check.emplace(s[i]);continue;}
      if(( check.top() == '{' && s[i] == '}' ) || (check.top() == '[' && s[i] == ']') || (check.top() == '(' && s[i] == ')')){
        check.pop();
      }
      else{
        check.emplace(s[i]);
      }
    }
    if(check.empty()){return true;}
    return false;
  }
};
int main(){
  std::string s ;
  std::cin>>s;
  Solution sol;
  if(sol.isValid(s)){
    std::cout<<"yes";
  }
  else{  
     std::cout<<"no";
  }
}