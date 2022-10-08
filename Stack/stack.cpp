#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
     int top;
     int* arr;
     int size;

    Stack(int n){
        size = n;
        arr = new int[n];
        top = -1;   
    } 

    void push(int element){
       if(size - top > 1){
        top++;
        arr[top] = element;
       }else{
        cout << "Stack overflow:";
       }
    }

    void pop(){
      if(top == -1){
        cout << "stack in empty:";
      }else{
        top--;
      }
    }

    void peek(){
        if(top == -1){
            cout << "stack is empty:";
        }else{
            cout << arr[top];
        }
    }

    bool isEmpty(){
       if(top == -1){
        cout << "Is empty";
       }else{
        cout << "Not empty";
       }
    }
};


int main(){
   Stack s1(5);
   s1.push(25);
   s1.push(50);
//    cout << s1.pop();
//    s1.pop();
//    s1.pop();
   s1.peek();
//    s1.size();

//    s1.isEmpty();
}