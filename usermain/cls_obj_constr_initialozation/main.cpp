#include  <iostream>
using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    void set_name (string s){
        
        name =s ;
        }
    string get_name(){
        return name;
        }
    void set_age (int s){
        
        health = s ;
        }
    int get_age(){
        return health;
        }
    void set_xp (int a);
    int get_xp();
    
    Player()
    : name {"Aadi"} , health{55} , xp{2} {     /*now you will get initialized value....in privious*/ 
        }                                      /*way they were not assigned to any in debugger the */ 
                                               /*values were garbage*/   
    };
     
    void Player::set_xp(int a){
        xp = a ;
        }
    int Player::get_xp(){
        return xp;
        }
main(){
   Player frank;
   frank.set_name("Addy");
   cout<<frank.get_name()<<endl;
   frank.set_age(12);
   cout<<frank.get_age()<<endl;
   frank.set_xp(1);
   cout<<frank.get_xp()<<endl;
}
