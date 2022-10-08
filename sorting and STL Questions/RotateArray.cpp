#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4] = {1,7,9,11};
    int b[4] = {0};
    int k;
    cin>>k;
    int n = 4;
    for(int i=0;i<n;i++){
        b[(i+k)%n] = a[i];
        cout<<(i+k)%n<<endl;
    }

    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}