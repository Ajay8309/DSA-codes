#include<bits/stdc++.h>
using namespace std;

class Hero{
//    properties
   public:
      int health;
      char Level;
      char* name;

   int print(){
     cout << this->health << " ";
     cout << this->Level << " ";
     cout << this->name << " ";
   }

   Hero(int health, char level, char *name){  // Manual constructor
    this->health = health;
    this->Level = level;
    this->name = name;
   }

   ~Hero(){
      cout << "destructor called" ; 
   }


};


int main(){

    char name[5] = "Ajay";
    Hero* hero1 = new Hero(70, 'A', name);

    hero1->print();

    // For dynamically created object we have to call the destructor manually 
    delete hero1;
    // for statically created onbject defalult constructor is called automatically.  
    

}