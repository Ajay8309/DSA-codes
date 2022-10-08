#include<bits/stdc++.h>
using namespace std;


int solve(int a,int b){
    if(b == 0){
        return 1;
    }

    return a*solve(a,b-1);
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<solve(a,b);
}
