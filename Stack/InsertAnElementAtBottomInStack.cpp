#include<bits/stdc++.h>
using namespace std;

 void solve(stack <int> s, int num){
    // base case
    if(s.empty()){
       s.push(num);
       return ;
    }

    int ele = s.top();
    s.pop();

    // Recursive logic
    solve(s, num);

    s.push(ele);
}


int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int num;
    cin >> num;
   solve(s, num); 

   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   cout << s.top();
}