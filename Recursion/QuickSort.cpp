#include<iostream>
using namespace std;




int partition(int a[] , int s , int e ){
    
    int pivot = a[s];
    int cnt = 0;

    for(int i = s+1 ; i <= e ; i++){

        if(a[i] <= pivot){
            cnt++;
        }
    } 

    int pivotIndex = s + cnt;
    swap(a[pivotIndex] , a[s]);


    // Left and right part sorting 

    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(a[i] <= pivot){
           i++;
        }

        while(a[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(a[i++],a[j--]);
        }
    } 

    return pivotIndex;
}

    void quickSort(int a[] , int s , int e ){

    if(s >= e){
        return;
    }

    int pi = partition(a , s , e);
    // cout<<pi;

    quickSort(a , s , pi-1);

    quickSort(a , pi+1 , e);
}

int main(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }

    quickSort(a , 0 , n-1);

    for(int i = 0 ; i < n ; i++ ){
        cout << a[i]<<" ";
    }
    return 0;
}





// #include <iostream>
// using namespace std;
 
// int partition(int arr[], int start, int end)
// {
 
//     int pivot = arr[start];
 
//     int count = 0;
//     for (int i = start + 1; i <= end; i++) {
//         if (arr[i] <= pivot)
//             count++;
//     }
 
//     // Giving pivot element its correct position
//     int pivotIndex = start + count;
//     swap(arr[pivotIndex], arr[start]);
 
//     // Sorting left and right parts of the pivot element
//     int i = start, j = end;
 
//     while (i < pivotIndex && j > pivotIndex) {
 
//         while (arr[i] <= pivot) {
//             i++;
//         }
 
//         while (arr[j] > pivot) {
//             j--;
//         }
 
//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//         }
//     }
 
//     return pivotIndex;
// }
 
// void quickSort(int arr[], int start, int end)
// {
 
//     // base case
//     if (start >= end)
//         return;
 
//     // partitioning the array
//     int p = partition(arr, start, end);
 
//     // Sorting the left part
//     quickSort(arr, start, p - 1);
 
//     // Sorting the right part
//     quickSort(arr, p + 1, end);
// }
 
// int main()
// {
//        int n;
//     cin >> n;
//     int arr[100];
//     for(int i = 0 ; i < n ; i++ ){
//         cin >> arr[i];
//     }
   
 
//     quickSort(arr, 0, n - 1);
 
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
 
//     return 0;
// }