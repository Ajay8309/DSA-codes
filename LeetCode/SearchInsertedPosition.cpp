#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int target;
    cin >> target;

    int s = 0, e = n-1, mid = (s+e)/2;
        
        while(s <= e){
            if(a[mid] == target){
                cout << mid;
                return 0;
            }else if(target < a[mid]){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
            
            mid = (s+e)/2;
        }

       if(target < a[0]){
        cout << 0;
        return 0;
       }else if(target > a[n-1]){
        cout << n;
        return 0;
       }

       for(int i = 0; i < n; i++){
        if(target > a[i] && target < a[i+1]){
            cout << i+1;
            return 0;
        }
       }
}