#include<bits/stdc++.h>
using namespace std;

int Count(int n){
    if(n == 0){
        return 0;
    }

    Count(n-1);

    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
//    int ans;
    Count(n);
}