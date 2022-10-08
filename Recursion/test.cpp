#include<bits/stdc++.h>
using namespace std;


// Power of 2


// int power(int n){
//    // base case

//    if(n == 0){
//       return 1;
//    }

//    // Recursive Relation

//    return 2 * power(n - 1); 

// }
// =========================
// factorial ===============
// =========================

// int fact(int n){

//    if(n == 0){
//       return 1;
//    }

//    return n * fact(n - 1);
// }


// ===================
// Sum of Array=======
// ===================

// int sum(int a[], int n){
//       if(n == 0){
//          return 0;
//       }

//       if(n == 1){
//          return a[0];
//       }

//       return a[0] + sum(a + 1, n - 1);
// }

// =====================
// Counting=============
// =====================


int count(int n){
   if(n == 0){
      return 0;
   }
    cout<<n<<" ";

    count(n - 1);
    
}

int main(){
   int n;
   cin>>n;

   // power(n);
   //   fact(n);

   // int a[1000];

   // for(int i=0;i<n;i++){
      // cin>>a[i];
   // }
   // int ans = sum(a,n) ;

   int ans = count(n);
   cout<<ans;
}