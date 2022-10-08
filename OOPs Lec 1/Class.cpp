#include<bits/stdc++.h>
using namespace std;

class Hero{
    
    // properties
    private:  
      int level;
    public:
      int health;

    Hero(){
        cout << "Constructor called" << endl;
    }

    Hero(int level, int health){
        this->level = level;
        this->health = health;
    }
    
    int getLevel(){
        return level;
    }  

    // int setLevel(int h){
    //     level = h;
    // }

};


int main(){
    // Hero h1;

    Hero h1(50,100);
    Hero h2(h1);
    // h1->health = 10; 
    // cout << h1->health << endl;
    // h1->setLevel(6);
    cout << h2.getLevel() << endl;
    cout << h2.health;

}