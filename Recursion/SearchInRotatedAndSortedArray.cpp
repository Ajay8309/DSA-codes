#include<bits/stdc++.h>
using namespace std;


int solve(int* a, int s, int e, int r){
    if(s > e){
        return false;
    }

   int mid = s+(e-s)/2;

    if(s == e){
        return s;
    }

     if(a[mid>=a[0]]){
        return solve(a,mid+1,e,r);
    }else{
        return solve(a,s,mid,r);
    }
}

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int r;
    cin>>r;
    cout<<solve(a,0,n-1,r);

}