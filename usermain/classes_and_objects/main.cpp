#include <iostream>
using namespace std;

class Player{

private:
    //attributes
    string name = "Player1";
    int health;
    int xp;
    //methods
public:
    
    void talk (string says){ cout<<name<<" says "<<says<<endl; }
    bool is_dead();
};

main(){
    Player frank;
//    frank.health = 86;   //its giving error bcoz health is private attribute.
    frank.talk("My name is Aditya Khare.");
    
    }