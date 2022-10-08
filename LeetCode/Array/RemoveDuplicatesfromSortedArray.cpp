#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    map<int, int>mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<int>v;
    int ans = 0;
        for(auto i:mp){
            ans += (i.second-1);
            v.push_back(i.first);
        }

    //   cout << ans;  
    for(int i = 0; i < mp.size(); i++){
        a[i] = v[i];
    }
    for(int i = 0; i < mp.size(); i++){
        cout << a[i] << " ";
    }

}