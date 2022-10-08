#include<bits/stdc++.h>
using namespace std;


// This is single Inheritance

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


int main(){

    // Human h1;
    // h1.age = 15;
    // cout << h1.getAge();

    Male m1;
    m1.age = 20;
    cout << m1.age;

}