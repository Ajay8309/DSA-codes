// to do binary search item in the array  shuld be already sorted

#include<iostream>
using namespace std;



int search(int a[], int key, int n){
    
    int top = 0, bottom = n-1, mid = (top+bottom)/2;

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
    int a[6] = {1,2,3,4,5,9};
    int n = 6;
    int key;
    cin>>key;
    int index=search(a, key, n);
    cout<<index;
}