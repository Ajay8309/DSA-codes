#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {2,0,1,3,0,0};
    int b[6] = {0};
            int k =0;

    for(int i=0;i<6;i++){
        if(a[i]!=0){
            b[k] = a[i];
            k++;
        }
    }

    for(int i=k;i<6-k;i++){
        a[i] = 0;
    }

    for(int i=0;i<6;i++){
        cout<<b[i];
    }

}