#include<bits/stdc++.h>
using namespace std;


int solve(int arr[], int n, int r){
   if(n == 0)
      return false;

      int rp = solve(arr+1, n-1, r);
      if(r == arr[0]){
        return true;
      }  else{
          return rp;
      }
}

int main(){
     int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int r;
    cin>>r;

    cout<<solve(arr, n, r);
}