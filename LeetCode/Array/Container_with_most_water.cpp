#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


   vector<int>v;
   int size = n -1;
    for(int i = 0; i < n-1; i++){
        for(int j = i; j < n; j++){
            // int x = min(a[i], a[j]);
            // v.push_back(x*cnt);
            // cnt++;
            cout << a[i] << " " << a[j];
        }
        cnt = 1;
    }

    // for(auto i:v){
    //     cout << i << " ";
    // }


}