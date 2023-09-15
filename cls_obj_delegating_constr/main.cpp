#include <iostream>
using namespace std;

class Player{
private:
    string name;
    int health;
    int experi;
public:
    Player (string s , int a , int b)
    :name {"addy"}, health{100}, experi{5}{
        }
    Player ()
    :Player{"None" , 0 , 0}{ cout<<"No-agrs is called\n";
        }
    Player(string s)
    :Player{s , 0 , 0}{cout<<"One-agr is called\n";
        }
    Player (string s , int a)
    :Player{s , a , 0}{cout<<"Two-args is called\n";
        }
        
    };
main (){
    
    Player frank;
    Player rank("aadi");
    Player ank("aayu" , 5);
    Player nk("raj" , 2 , 3);
    Player k("Aadi");
    }
