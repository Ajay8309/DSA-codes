#include<bits/stdc++.h>
using namespace std;


int solve(int arr[], int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return arr[0];
    }
      
    int rp =  solve(arr+1 , n-1); 
    int sum = arr[0] + rp;
    return sum; 
  
}

int main(){
     int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<solve(arr, n);
}