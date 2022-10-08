 
#include<bits/stdc++.h>
using namespace std;


int merge(int a[], int n, int b[], int m, int c[], int k){
    int i=0,j=0,l=0;

         while(i<n && j<m){

            if(a[i] < b[j]){
                
                    c[l] = a[i];
                l++;
                i++;
            }else{
                
                    c[l] = b[j];
                l++;
                j++;
            }
         }   

         while(i<n){
            c[l++] = a[i++];
         }

         while(j<m){
            c[l++] = b[j++];
         }
        


    for(int p=0;p<l;p++){
        cout<<c[p];
        // cout<<i;
    }
}






int main(){
    int a[5] = {1,3,4,6,8};
    int b[3] = {2,5,7};

    int c[8] = {0};

    merge(a,5,b,3,c,8);
}