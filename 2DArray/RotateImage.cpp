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
        
        cout<<endl;

    for(int i=0;i<row;i++){
        for(int j=col-1;j>=0;j--){
            cout<<a[j][i]<<" ";
        }
        cout<<endl; 
    }

    

}