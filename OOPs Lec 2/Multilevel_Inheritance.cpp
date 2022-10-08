#include<bits/stdc++.h>
using namespace std;


// This is MultiLevel Inheritance

class Human{ //parent class
   public:
     int height;
     int age;
     int weight;

     int getAge(){
        return age;
     }
};

class Male:public Human{ //Child class
    public:
       string color;
};

class Female:public Human{ //Child class
    public:
      string HairType;
};


int main(){

    // Human h1;
    // h1.age = 15;
    // cout << h1.getAge();

    // Male m1;
    // m1.age = 20;
    // cout << m1.age;

    Female f1;
    f1.height = 160;
    cout << f1.height;

}