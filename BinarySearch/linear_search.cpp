#include<iostream>
using namespace std;

int main(){
    int a[6] = {1,2,3,4};
    int key;
    cin>>key;
    for(int i=0;i<5;i++){
        if(key == a[i]){
            cout<<key<<"found at position"<<i+1;
        }
    }
}