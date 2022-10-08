#include<bits/stdc++.h>
using namespace std;


int solve(int n){
    if(n == 0){
        return 1;
    }

    return n * solve(n-1);
    cout<<n<<" ";
}


int main(){
    int n;
    cin>>n;

    cout<<solve(n);
    
}