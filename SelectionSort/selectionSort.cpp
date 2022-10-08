#include<bits/stdc++.h>
using namespace std;






int sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }

        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;

}





int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a, n);
}






















// int sort(int a[], int n){
//     int temp;
//     int i,j;
//     for( i=0;i<n;i++){
//         for( j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 // temp = a[i];
//                 // a[i] = a[j];
//                 // a[j] = temp;
//                 swap(a[i],a[j]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//         // cout<<i<<endl;
//     }
     
// }



