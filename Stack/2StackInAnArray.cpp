#include<bits/stdc++.h>
using namespace std;


class Stack{

   public: 
    int* arr;
    int top1;
    int top2;
    int size;

    Stack(int size){
        this -> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    void push1(int num){
        if(size - top1 > 1){
            top1++;
            arr[top1] = num;
        }else{
            cout << "Stack is full";
        }
    }

    void push2(int num){
        if(size - 1 > 1){
            top2--;
            arr[top2] = num;
        }else{
            cout << "stack is full";
        }
    }

    void pop1(){
        if(top1 == -1){
            cout << "Stack 1 is toh empty:";
        }else{
            top1--;
        }
    }

    void pop2(){
        if(top2 == size){
            cout << "Stack 2 is toh empty:";
        }else{
            top2++;
        }
    }

    void peek1(){
        if(top1 == -1){
            cout << "stack 1 is toh empty:";
        }else{
            cout << arr[top1] << " ";
        }
    }

    void peek2(){
        if(top2 == size){
            cout << "Stack 2 is toh  empty:";
        }else{
            cout << arr[top2] << " ";
        }
    }
};

int main(){
   Stack s1(6);
   s1.push1(10);
   s1.push1(100);
   s1.push2(20);
   s1.push2(200);
   s1.peek1();
   s1.peek2();
  
}