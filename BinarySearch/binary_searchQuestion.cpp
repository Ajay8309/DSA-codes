// find out the occurence of 3

#include<iostream>
using namespace std;


int Leftocc(int a[], int key, int n){
    int s=0, e=n-1, m=(s+e)/2;
    int ans=-1,c=0;

    while(s<=e){
        if(a[m]==key){
            ans=m;
            e = m-1;
        }else if(key>a[m]){
            s = m+1;
        }else{
            e = m-1;
        }
        m=(s+e)/2;
    }
     return ans;
}

int Rightocc(int a[], int key, int n){
    int s=0, e=n-1, m=(s+e)/2;
    int ans=-1,c=0;

    while(s<=e){
        if(a[m]==key){
            ans=m;
            s = m+1;
        }else if(key>a[m]){
            s = m+1;
        }else{
            e = m-1;
        }
        m=(s+e)/2;
    }
     return ans;
}


int main(){
    int a[7] = {1,2,3,3,3,5,5};
     
   cout<< Rightocc(a, 5, 7) - Leftocc(a, 5, 7) +1 ;
}