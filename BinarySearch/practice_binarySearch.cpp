// Binary Search Implementation


#include<bits/stdc++.h>
using namespace std;



// int BinarySearch(int a[],int n,int key){
//     int s = 0, e = n-1, m = s+(e-s)/2;

//     while(s<=e){
//         if(key == a[m]){
//             return m;
//         }
//         if(key>a[m]){
//          s = m + 1;
//         }else{
//          e  = m - 1;
//         }

//         m = s+(e-s)/2;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int key;
//     cin>>key;
//     cout<<BinarySearch(a, n, key);
// }



// Find the pivot in an arry

// int pivot(int a[], int n){
//    int s = 0, e = n-1, m = s+(e-s)/2;

//    while(s<e){
//     if(a[m] >= a[0]){
//         s = m + 1;
//     }else{
//         e  = m;
//     }
//     m = s+(e-s)/2;
//    }
//    return s;
// }



// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
    
//     cout<<pivot(a, n);
// }





// search in rotated and sorted array


int pivot(int a[], int n){
   int s = 0, e = n-1, m = s+(e-s)/2;

   while(s<e){
    if(a[m] >= a[0]){
        s = m + 1;
    }else{
        e  = m;
    }
    m = s+(e-s)/2;
   }
   return s;
}

// int BinarySearch(int a[],int s, int e,int key){
//     int start = s, end = e, m = start+(end-start)/2;

//     while(start<=end){
//         if(key == a[m]){
//             return m;
//         }
//         if(key>a[m]){
//          start = m + 1;
//         }else{
//          end  = m - 1;
//         }

//         m = start+(end-start)/2;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int key;
//     cin>>key;

//     int x = pivot(a, n);
//     if(key>=a[x]&&key<=a[n-1]){
//            cout<< BinarySearch(a,x, n-1 , key);
//     }else{
//         cout<< BinarySearch(a, 0, x-1, key);
//     }
    
// }


// Square Root using binary Search

// int Sroot(int n){
//     int s = 0, e = n, m = s +(e-s)/2;
//     int ans = 0;
//     while(s<=e){
//         int x = m*m;
//         if(x>n){
//             e = m - 1;
//         }else if(x<n){
//             ans = m;
//             s = m + 1;
//         }else{
//             return m;
//             return 0;
//         }
//         m = s +(e-s)/2;
//     }
//     return ans;
// }

// double getPrecision(int tempsol, int num){
//     double fact = 1;
//     double ans = tempsol;

//     for(double i=0;i<3;i++){
//        fact = fact/10;

//        for(double j=ans; j*j<num; j = j+fact){
//         ans = j;
//        }
//     }   
    
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//    cout<<getPrecision(Sroot(n), n);
// }



// book allocation problem






// int isPossible(int a[],int n, int m, int mid){
//     int studentCount = 1;
//     int PageSum = 0;
//     for(int i=0;i<n;i++){
//         if(PageSum+a[i]<=mid){
//             PageSum+=a[i];
//         }else{
//             studentCount++;
//             if(studentCount>m||a[i]>mid){
//                 return false;
//             }
//             PageSum=a[i];
//         }
//         return true;
//     }
// }


// int Allocate(int a[], int n, int m){
//     int sum = 0;
//     int s = 0;
//     int ans = -1;

//     for(int i=0;i<n;i++){
//         sum+=a[i];
//     }
//     int e = sum;
//     int mid= s+(e-s)/2;

//     while(s<=e){
//         if(isPossible(a,n,m,mid)){
//           ans = mid;
//           e = mid -1;
//         }else{
//             s = mid +1;
//         }
//       mid= s+(e-s)/2;

//     }
//     return ans;
// }


// int Bsearch(int a[],int n,int r){
//    int s = 0, e = n-1, mid = s+e/2;
    
//     while(e<=s){
//         if(a[mid] == r){
//             return a[mid];
//         }else if(a[mid]>r){
//             s = mid+1;
//         }else{
//             e = mid-1;
//         }

//         mid = s+e/2;
//     }

// }

// int main(){
//     int n; 
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

// int r;
// cin>>r;

//     cout<<Bsearch(a,n,r);
// }







