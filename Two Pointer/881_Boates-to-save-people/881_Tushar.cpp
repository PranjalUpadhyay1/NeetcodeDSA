#include <bits/stdc++.h>
class Solution{
  public:
  int numRescueBoats(std::vector<int> &people , int limit){
    int data_count =people.size(), i = 0 , j = data_count -1,answer=0;
    std::sort(people.begin(), people.end());
    while(i<=j){
      if(i==j){
        answer++; 
        return answer;
      }
      if(people[i]+people[j]<=limit){
        answer++; 
        i++; j--;
      }
      else{
        people[i]<people[j]?j--:i++;
        answer++;
       }
    }
    return answer;
  }
};
int main(){
  int data_count , data , limit;
  std::vector<int> people;
  std::cin>>data_count>>limit;
  Solution sol;
  for(int i = 0 ; i <data_count ; i ++){
    std::cin>>data;
    people.emplace_back(data);
  }
  std::cout<<sol.numRescueBoats(people,limit);
}