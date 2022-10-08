#include<bits/stdc++.h>
using namespace std;

int main(){
  int m, n;
  cin >> m >> n;
  int a[n], b[m];
  vector<float>v;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    v.push_back(a[i]);
  }

  for(int i = 0; i < m; i++){
    cin >> b[i];
     v.push_back(b[i]);
  }

  sort(v.begin(), v.end()); 

  int sum = (m+n) ;

  if(sum %2  == 0){
    return (v[(sum-1)/2] + v[((sum-1)/2) + 1])/2;
  }else{
    return v[(sum-1)/2];
  }

 

}