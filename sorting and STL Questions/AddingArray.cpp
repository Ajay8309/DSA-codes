#include<bits/stdc++.h>
using namespace std;



int Add(int a[], int n, int n[], int m){
    vector <int> ans;
    int sum = 0;
    int carry = 0;
        int j = m-1;
        int i = n-1;
    
    while(i<=n&&j<=m){
        sum = a[i] + b[j] +carry;
        carry = sum/10;
        sum = sum % 10;
        j--;
        i--;

        ans.push_back(sum);
    }

    while(i<=n){
        sum = a[i] + carry;
        carry = sum/10;
        sum = sum % 10;
        i--;

        ans.push_back(sum);
    }

    for(int i=0;i<n;i++){
        cout<<ans.pop_back();
    }
}




int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    Add(a,n,b,m);
}