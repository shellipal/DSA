#include<iostream>
#include<vector>
using namespace std;

bool SearchMatrix(vector<vector<int>>& mat , int target){
    int m = mat.size();
    int n = mat[0].size();

    int r = 0;
    int c = n-1;

    while(r<m && c>=0){
        if(target == mat[r][c]){
            return true;
        }else if(target < mat[r][c]){
            c--;
        }else{
            r++;
        }
    }
    return false;
}

int main(){
 vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,16},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
 cout<<SearchMatrix(matrix, 11)<<endl;
 return 0;
}