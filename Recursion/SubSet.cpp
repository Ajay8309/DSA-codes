#include<bits/stdc++.h>
using namespace std;


void solve(vector <int> nums,  vector <int> output,  int index,  vector <vector <int>>& ans){
    
    // Base Case

    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    // Exclude

     solve(nums,output,index+1,ans);
     
   // Include
     int element = nums[index];
     output.push_back(element); 
    solve(nums,output,index+1,ans);  
}


int main(){
    int n;
    cin >> n;
    vector <int> nums;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector <int> output;
    vector <vector <int>> ans;
    int index = 0;
    solve(nums,output,index,ans);
    // return ans;
   

}