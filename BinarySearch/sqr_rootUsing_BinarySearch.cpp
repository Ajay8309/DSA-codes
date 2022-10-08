#include<bits/stdc++.h>
using namespace std;


long long int sqrtInt(int num){
 int ans;
    // cin>>num;
    // int  a[num];
   
    
     int s=0,e=num,mid=(s+e)/2;

    while(s<=e){
        if(mid*mid>num){
            e = mid-1;
        }else if(mid*mid<num){
           ans = mid;
           s = mid+1;
        }else{
            return mid;
            return 0;
        }
        mid=(s+e)/2;
    }
    return ans;
}


double setPrecision(int n, int precision, int tempSol ){
    double fact = 1;
    double ans = tempSol;
    for(int i=0;i<precision;i++){
        fact = fact/10;

        for(double j=ans; j*j<n;j=j+fact){
            ans = j;
        }

    }
    return ans;
}

 int main(){
    int n;
    cin>>n;
    int tempSol = sqrtInt(n);
    cout<<setPrecision(n,3,tempSol);
}


