#ifndef _PLAYER_H_
#define _PLAYER_H_
using namespace std;

class Player
{
private:
    string name;
    int age ;
public:
    void set_name(string s){
        name = s;
        }
    string get_name(){
        return name ;
        }
    void set_age (int a ){
        age =a;
        }
    int get_age(){
        return age;
        }
        
    Player (){
                                              // we can declear our own constructor if we want//      
        name = "None";
        age  = 0;
        
        }
        
    Player (string s , int a){                //we provided a double argument constructor //
        
        name = s;
        age = a;
        
        }

};

#endif // _PLAYER_H_
