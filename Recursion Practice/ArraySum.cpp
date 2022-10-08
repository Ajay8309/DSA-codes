#include<bits/stdc++.h>
using namespace std;


int solve(int a[],int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return a[0];
    }

    int rp = solve(a+1,n-1);
    int sum = a[0] + rp;
    return sum; 
    
}

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<solve(a,n);
}