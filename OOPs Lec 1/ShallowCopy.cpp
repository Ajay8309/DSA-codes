#include<bits/stdc++.h>
using namespace std;


class Hero{
    public:
      int health;
      char Level;
      char* name;

    Hero(int health, char level, char* name){
    this->health = health;
    this->Level = level;
    this->name = name;
     }

     int print(){
     cout << this->health << " ";
     cout << this->Level << " ";
     cout << this->name << endl;
      }

//    Hero(){
//       int new 
//    }
};

int main(){

    char name[5] = "Ajay";
    Hero hero1(70,'A', name);


    Hero hero2(hero1);

    hero1.print();

    hero2.print();
    
    hero1.name[0] = 'B';

    hero1.print();

    hero2.print();
}

// output :- 70 A
         //  10 A
         //  70 A
         //  70 A

        //  In case of Integers everything is gud
 
        In case of char
             70 A Ajay
             70 A Ajay
             70 A Bjay
             70 A Bjay

// changes made in on object affects the other object ---->  this is shallow copy which is produced by defalult copy constructor 