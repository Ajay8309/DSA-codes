#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector <int> prime(n+1,true);
    int cnt = 0;
    prime[0] = prime[1] = false;

    for(int i = 2; i < n; i++){
       if(prime[i]){
        cnt++;

        for(int j = 2*i; j < n; j = i + j){
            prime[j] = false;
        }
       }
    }

    cout<<cnt;
}