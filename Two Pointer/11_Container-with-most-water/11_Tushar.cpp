#include <bits/stdc++.h>
class Solution{
  public:
  int maxArea(std::vector<int> &height){
    int data_count = height.size(), area = 0, i =0, j = data_count-1;
    while(i<j){
      int temp = height[i]<height[j]?height[i]*(j-i):height[j]*(j-i);
      if(temp>area){area=temp;}
      if(height[i]<height[j]){ i++; }
      else{j--;} 
    }
    return area;
  }
};
int main(){
  int data_count , data;
  std::vector<int> height;
  Solution sol;
  std::cin>>data_count;
  for(int i = 0 ; i < data_count ; i ++){
    std::cin>>data;
    height.emplace_back(data);
  }
  std::cout<<sol.maxArea(height);
}