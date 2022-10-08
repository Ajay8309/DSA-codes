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

    int r;
    cin>>r;

    int start = 0;
    int end = row*col-1; 
    int mid = start+(end-start)/2;

    while(start<=end){
        int element = a[mid/col][mid%col];
        // cout<<mid/col<<" "<<mid%col;
        // cout<<element<<" ";

        if(element == r){
            cout<<"Found";
            return 0;
        }else if(element > r){
            end = mid-1;
        }else if(element < r){
            start = mid+1;
        }

        mid = start+(end-start)/2;
    }
    cout<<"Not found";
    return 0;
}