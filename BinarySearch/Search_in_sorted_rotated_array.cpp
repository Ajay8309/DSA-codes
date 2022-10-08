#include<iostream>
using namespace std;



int pivot(int a[],int n){
    int s=0,e=n-1,mid=(s+e)/2;
    while(s<e){
        if(a[mid>=a[0]]){
          s = mid+1;
        }else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int binarSearch(int a[],int s,int e ,int key){
    
    int top = s, bottom = e, mid = (top+bottom)/2;

    while(top<=bottom){

    if(a[mid] == key){
        return mid+1;
    }else if(key>a[mid]){
         top= mid +1;
    }
    else{
         bottom = mid -1;
    }
    mid = (top+bottom)/2;
    }

}


int main(){
    int a[5]={8,9,1,2,3};
    int k=8;
    // cout<<search(a,5,2);
    int pivote = pivot(a,5);
    if(k>=a[pivote]&& k<=a[4]){
        cout<<binarSearch(a,pivote,4,8);
    }else{
        cout<<binarSearch(a,0,pivote-1,8);
    }
}