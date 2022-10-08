#include<bits/stdc++.h>
using namespace std;

// int x;
void solve(stack<int> &s, int size, int cnt){
    // base case
    if(cnt == size / 2){
         cout << s.top();
         s.pop();
        return ;
    }

    // int num = s.top();
    s.pop();

    // // recursive call

    solve(s, size, cnt+1);

    // s.push(num);
}

int main(){
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
   int cnt;
//    cout << s.size() << " ";
   solve(s, 5, 0);
//    cout << s.size() << " ";
//    cout << x;



}