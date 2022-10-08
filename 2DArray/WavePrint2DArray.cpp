#include<bits/stdc++.h>
using namespace std;

int main(){
   int row,col;
   cin>>row>>col;
   int a[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>a[i][j];
    }
   } 
   
   vector <int> ans;

//   int count = 0;
//   int total = row*col;

for(int i = 0; i < col; i++){

    if(i%2!=0 || i != 0){
        for(int j = row - 1; j >= 0; j--){
             ans.push_back(a[j][i]);
        }
    }else{
        for(int j = 0; j <= row; j++){
            ans.push_back(a[j][i]);
        }
    }
}

 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
  
  
}