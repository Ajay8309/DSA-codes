#include<bits/stdc++.h>
using namespace std;


int solve(int a[], int s, int e, int r){

    if(s > e){
        return false;
    }

    int mid = (s+e)/2 ;

    if(a[mid] == r){
        return true;
    }

    if(a[mid] < r){
        return solve(a,mid + 1, e, r);
    }else{
        return solve(a, s, mid - 1, r);
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
    int s = 0,e = n - 1;

    cout<<solve(a,s,e,r);

}