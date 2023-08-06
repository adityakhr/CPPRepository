#include <iostream>
using namespace std;
class Player{
private:
    string name ;
    int health;
    int xp;
public:
     //methods
    string get_name(){
        return name;
        }
    int get_health(){
        return health;
        }
    int get_xp(){
        return xp;
        }
    //constructor
    Player(string s = "None" , int a = 0 , int b = 0)
    :name {s} , health{a} , xp{b}{
        cout<<"Three args are called for :"<<name<<endl;
        }
    //copy constructor
    Player (const Player &source);
    
    ~Player (){
        cout<<"Destructor is called for: "<<name<<endl;
        }
    };
     Player::Player (const Player &source)
//    :name{source.name} , health{source.health} , xp{source.xp}{    //normal initialization
    :Player{source.name , source.health , source.xp}{               //delegation of constructor
        cout<<"The copy constructor made a copy of: "<<source.name<<endl;
        }

void display_player (Player p){
    
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"health: "<<p.get_health()<<endl;
    cout<<"Xp: "<<p.get_xp()<<endl;
    }
int main(){
    Player empty{"XXXXXXX"};
    display_player (empty);
    cout<<"========================================\n";
    Player frank("Aadi");
    display_player (frank);
    cout<<"========================================\n";
    Player rank("Addy" , 5);
    display_player(rank);
    cout<<"========================================\n";
    Player ank("Ayden" , 2 , 1);
    display_player(ank);
    cout<<"========================================\n";
    }