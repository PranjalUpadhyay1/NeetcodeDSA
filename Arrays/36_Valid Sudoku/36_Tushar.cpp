#include <bits/stdc++.h>
class Solution{
    public:
    bool isValid(std::unordered_map<int,std::vector<std::pair<int,int>>> &check , int row , int col , int val){
        std::pair<int,int>index(row,col);
        
        if(!check.count(val)){
            check[val].emplace_back(index);
            return true;
        }
        else{
            for(int i= 0 ; i <check[val].size(); i++){
                if(check[val][i].first==row){
                    return false;
                }
                else if(check[val][i].second==col){
                    return false;
                }
                else if((check[val][i].first)/3 == row/3 && check[val][i].second/3 == col/3){;return false;}
            }
        }
        check[val].emplace_back(index);
        return true;
    }
    bool isValidSudoku(std::vector<std::vector<char>> &board){
        std::unordered_map<int,std::vector<std::pair<int,int>>> check;
        int c = 0 ;
        for(int i = 0 ; i < 9 ; i ++){
            for(int j = 0 ; j < 9 ; j++){
                c++;
                int val = board[i][j] - 48;
                if(board[i][j]=='.'){continue;}
                if(!isValid(check,i,j,val)){
                    
                    return false;
                }
            }
        }
        return true;
    }
};
void print(std::vector<std::vector<char>> board){
    for(int i = 0 ; i < 9 ; i ++){
        for(int j = 0 ; j < 9 ; j++){
            std::cout<<board[i][j];
        }
        std::cout<<std::endl;
    }
}
int main(){
    char data;
    std::vector<std::vector<char>> board(9,std::vector<char>(9));
    Solution sol;
    for(int i = 0 ; i < 9 ; i ++){
        for(int j = 0; j < 9 ;j ++){
            std::cin>>data;
            board[i][j]=data;
        
        }
    }
    print(board);
    if(sol.isValidSudoku(board)){
        std::cout<<"True"<<std::endl;
    }
    else{
        std::cout<<"False"<<std::endl;
    }
}
/*
test case input converter for running into online compilers
#include <bits/stdc++.h>
using namespace std;
void print(string s){
    
    for(int i = 0 ; i < s.length() ; i ++){
        if(s[i]=='['||s[i]==','||s[i]=='"'||s[i]==']'){continue;}
        cout<<s[i]<<endl;
    }
}
using namespace std;
int main(){
    string s ;
    for(int i = 0 ; i < 9 ; i ++){
        cin>>s;
        print(s);
    }
}
*/