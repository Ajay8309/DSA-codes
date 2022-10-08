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

      Hero(Hero& temp){
      char* ch = new char[strlen(temp.name)+1];
      strcpy(ch,temp.name);
      this->name = ch; 

      cout << " Copy Constructor called" << endl;

      this->health = temp.health;
      this->Level = temp.Level;
    
   }

   // This is deep copy constructor    
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

