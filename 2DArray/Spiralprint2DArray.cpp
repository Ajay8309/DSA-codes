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
        // cout<<endl;
    }

    vector <int> ans;
    int count = 0;
    int total = row*col;
//    cout<<total;
    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < total){

        for(int i = startingCol; i <= endingCol && count < total; i++){
            ans.push_back(a[startingRow][i]);
            count++;
        }

        startingRow++;

        for(int i = startingRow; i <= endingRow && count < total; i++){
            ans.push_back(a[i][endingCol]);
            count++;
        }

        endingCol--;
        
        for(int i = endingCol; i >= startingCol && count < total; i--){
            ans.push_back(a[endingRow][i]);
            count++;
        }

        endingRow--;

        for(int i = endingRow; i >= startingRow && count < total; i--){
            ans.push_back(a[i][startingCol]);
            count++;
        }
        startingCol++;

    }

    // cout<<ans.size()<<endl;

   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }

}
