#include<bits/stdc++.h>
using namespace std;


int solve(int a[], int s, int e){

    if(s > e){
        return false;
    }

    if(s == e){
        return s;
    }

    int mid = (s+e)/2 ;

    if(a[mid] >= a[0]){

         return solve(a,mid + 1, e);

    }else{

         return solve(a, s, mid);
    }

}


int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    
    int s = 0,e = n - 1;

    cout<<solve(a,s,e);

}