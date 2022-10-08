#include<bits/stdc++.h>
using namespace std;



int reverse(int a[], int n){
        int s = 0, e = n-1, m = s+(e-s)/2;

        while(e>=s){
            swap(a[s],a[e]);
            s++;
            e--;
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    reverse(a,n);
}