#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int r;
    cin>>r;
    // sort(a,a+n);

    int s = 0, e = n - 1, m = (s + e)/2;

    while(s <= e){
        if(a[m] == r){
            cout<<"Found at  position"<<m+1;
            return 0;
        }else if(r < a[m]){
            e = m - 1;
        }else if(r > a[m]){
            s = m + 1;
        }

        m = (s + e)/2;
    }


}