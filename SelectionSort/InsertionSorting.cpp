#include<bits/stdc++.h>
using namespace std;




int Insertion_sort(int a[],int n ){
    
    for(int i=1;i<n;i++){
        int temp = a[i];
        int j = i - 1;
        for( ; j>=0 ; j-- ){
            if(a[j]>temp){
                a[j+1] = a[j];
            }else{
                break;
            }
        }


        a[j+1] = temp ;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
        
    }

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    Insertion_sort(a,n);
}