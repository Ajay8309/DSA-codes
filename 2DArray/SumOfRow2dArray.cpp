#include<bits/stdc++.h>
using namespace std;



int sumRow(int a[][3], int n, int m){
     for(int i=0;i<3;i++){
    int sum=0;
        for(int j=0;j<3;j++){
           sum = sum +a[i][j];
        }
  cout<<sum<<endl;
    }

}

int main(){
    int a[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    sumRow(a,3,3);
    
}