#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string ans;
    int carry = 0;
    
    int i = a.size()-1;
    int j = b.size()-1;

    while(i >= 0 || j >=0 || carry){
        int sum = 0;
        if(i >= 0){
            sum += a[i] - '0';
            i--;
        }

        if(j >= 0){
            sum += b[j] -'0';
            j--; 
        }
    
       sum += carry;
       ans += sum % 2 + '0';
       carry = sum / 2;
    }

    reverse(begin(ans), end(ans));

    return ans;

   
}