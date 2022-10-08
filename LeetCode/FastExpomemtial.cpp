#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>x>>n;

    int res = 1;

    while(n>0){
        if(n%2!=0){
            res = res*x;
            cout<<"res"<<res<<endl;
        }

        x = x*x;
        cout<<"x"<<x<<endl;
        n=n>>1;  // n/2
        cout<<"n"<<n<<endl;
    }

    cout<<res;
}