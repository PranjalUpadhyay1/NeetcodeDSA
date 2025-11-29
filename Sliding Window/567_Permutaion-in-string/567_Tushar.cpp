#include <bits/stdc++.h>
class Solution{
  public:
  bool checkInclusion(std::string &s1 , std::string s2){
    int tracker[26]={0};
    int l_s1 = s1.length() , l_s2 = s2.length() , temp = 0 ,temp2 = 0 , nonZero = 0 ;
if(l_s1>l_s2){return false;}
    // for(int i = 0 ; i < 26 ; i ++){
    //     char c = i +97;
    //     std::cout<<c<<" ";
    // }
    //std::cout<<std::endl;
    for(int i = 0 ; i < l_s1 ; i ++){
      temp = s1[i] -97; temp2 =s2[i]-97; 
      abs(tracker[temp])>abs(++tracker[temp])? nonZero--:nonZero++;
    //   for(auto i : tracker){std::cout<<i<<" ";}std::cout<<std::endl;
    //   std::cout<<nonZero<<std::endl;
      abs(tracker[temp2])>abs(--tracker[temp2])?nonZero--:nonZero++;
    //   for(auto i : tracker){std::cout<<i<<" ";}std::cout<<std::endl;
    //   std::cout<<nonZero<<std::endl;
    }
    if(nonZero==0){return true;}
    if( l_s1 == l_s2){
      if(nonZero==0){
        return true;
      }
      else{
        return false;
      }  
    }
    for(int i = l_s1 ; i < l_s2 ; i ++){
      temp = s2[i] - 97;  temp2 = s2[i-l_s1] - 97;
    //   std::cout<<"Loop"<<i<<std::endl;
      abs(tracker[temp2])>abs(++tracker[temp2])? nonZero--:nonZero++;
    //   for(auto i : tracker){std::cout<<i<<" ";}std::cout<<std::endl;
    //   std::cout<<nonZero<<std::endl;
      abs(tracker[temp])>abs(--tracker[temp])?nonZero--:nonZero++;
    //   for(auto i : tracker){std::cout<<i<<" ";}std::cout<<std::endl;
    //   std::cout<<nonZero<<std::endl;
      if(nonZero==0){ return true; }
    }
    return false;
  }
};
int main(){
  std::string s1 , s2;
  std::cin>>s1>>s2;
  Solution sol;
  if(sol.checkInclusion(s1,s2)){
    std::cout<<"yes";
  }
  else{
    std::cout<<"no";
  }
}