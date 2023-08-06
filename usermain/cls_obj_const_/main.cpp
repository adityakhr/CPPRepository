#include <iostream>
#include <string>
using namespace std;

class Player {
    
private:
    string name;
    int health;
    int xp;
public:
    string get_name() const {
        return name;
        }
    Player (string s , int a , int b)
    :name{s} , health{a} , xp{b}{
        cout<<"Third arg is called.\n";
        }
    Player (string s  , int a)
    :name{s} , health{a} {
        cout<<"Two arg is called.\n";
        }
    Player (string s)
    :Player{s , 0 , 0}{
        cout<<"One arg is called.\n";
        }
    
    
    };
//void display_player_name(const Player &p){
//    cout<<p.get_name()<<endl;
//    }
    
main(){
    
    const Player villin{"Aditya" , 50 };
    cout<<villin.get_name()<<endl;
    }