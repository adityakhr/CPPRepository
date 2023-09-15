#include <iostream>
using namespace std;

class Player{
public:
    string name;
    int health;
    int experi;
public:
    Player (string s = "NONE" , int a = 0  , int b = 0 )             // should set values to default
    :name {s}, health{a}, experi{b}{                              //look initialization
        }
    };
main (){
    
    Player frank;
    cout<<frank.name<<" "<<frank.health<<" "<<frank.experi<<endl;
    Player rank("aadi");
    cout<<rank.name<<" "<<rank.health<<" "<<rank.experi<<endl;
    Player ank("aayu" , 5);
    cout<<ank.name<<" "<<ank.health<<" "<<ank.experi<<endl;
    Player nk("raj" , 2 , 3);
    cout<<nk.name<<" "<<nk.health<<" "<<nk.experi<<endl;
    }