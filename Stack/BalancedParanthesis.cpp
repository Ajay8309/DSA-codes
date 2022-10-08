#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack <char> st;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];

        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }else{
            if(!st.empty()){
                char top = st.top();
                if(ch == '}' && top == '{' || ch == ']' && top == '[' || ch == ')' && top == '('){
                    st.pop();
                }else{
                    // return false;
                    cout << "Unbalanced:";
                    return 0; 
                }
            }else{
                cout << "Unbalanced";
                    return 0; 
            }
        }
    }

    if(st.empty()){
        cout << "Balanced";
    }else{
        cout << "Unbalanced";
    }
}