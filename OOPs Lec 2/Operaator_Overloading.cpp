#include<bits/stdc++.h>
using namespace std;

class B{
    public:
      int a;
      int b;

   void operator+ (B &obj){
    //  int value1 = this->a;
    //  int value2 = obj.a;

    //  cout << "Output" << value2 - value1 ;

    cout << "Hello Ajay";
   }   

};





int main(){

    B obj1, obj2;
    
    obj1.a = 5;
    obj2.a = 16;

    obj1 + obj2;
}



