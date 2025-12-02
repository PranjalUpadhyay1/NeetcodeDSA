#include <bits/stdc++.h>
class Solution {
  public:
  int helper(std::stack<int> &track , int destroyer , int &count){
    int flag = 1;
    while(flag){
      if(track.top()<0 && destroyer<0){
        count++;
        track.emplace(destroyer); 
        return 0;
      }
      else if(track.top()<destroyer*(-1)){
        track.pop();count--;
        if(track.empty()){
          count++;
          track.emplace(destroyer);
          return 0;
        }
      }
      else if(track.top()==destroyer*(-1)){
        count--;track.pop();
        if(track.empty()){
            return 1;
        }
        return 0;
      }
      else{
        return 0;
      }
    }
    return 0 ;
  }
  std::vector<int> asteroidCollision(std::vector<int> &asteroids){
    int data_count = asteroids.size() , count = 1;
    std::stack<int> track ;
    track.emplace(asteroids[0]);
    for(int i = 1 ; i < data_count ; i ++){
      if(track.top()>0 && asteroids[i]<0){
        int flag = helper(track,asteroids[i],count);
        if(flag && i < data_count-1){
            track.emplace(asteroids[i+1]);
            i++;count++;
        }
      }
      else{
        track.emplace(asteroids[i]);
        count++;
      }
    }
    std::vector<int> answer(count,0);
    for(int i = 0 ; i < count ; i ++){
      answer[count-i-1]=track.top();
      track.pop();
    }
  return answer;
  }
};
int main(){
  int data_count , data;
  std::vector<int> asteroids;
  std::cin>>data_count ;
  for(int i = 0 ; i<data_count ; i ++){
    std::cin>>data;
    asteroids.emplace_back(data);  
  }
  Solution sol;
  std::vector<int> answer = sol.asteroidCollision(asteroids);
  for(auto i : answer){
    std::cout<<i<<" ";
  }
}
