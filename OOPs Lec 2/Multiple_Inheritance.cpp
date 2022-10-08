#include<bits/stdc++.h>
using namespace std;


// This is Multiple Inheritance

class Human{ //parent class
   public:
     int height;
     int age;
     int weight;

     int getAge(){
        return age;
     }
};

class Animal{//Parent Class
   public:
     int height;
     int age;
     int weight;
     int type;

     int getAge(){
        return age;
     }
};


class Hybrid:public Human, public Animal{ //Child class
    public:
       string color;
};




int main(){


    Hybrid h1;
    h1.Human::age = 5; //Inheritance Ambiguity
    cout << h1.Human::getAge();//Inheritance Ambiguity
 

    // Human h1;
    // h1.age = 15;
    // cout << h1.getAge();

    // Male m1;
    // m1.age = 20;
    // cout << m1.age;

    // Female f1;
    // f1.height = 160;
    // cout << f1.height;

}