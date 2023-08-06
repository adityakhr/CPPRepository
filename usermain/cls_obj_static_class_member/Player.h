#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
using namespace std;
class Player{
private:
    static int num_players;      //if you initialize it here compiler will generate error.
    string name;
    int age;
    int xp;
public:
    string get_name(){ return name;}
    int get_age(){ return age;}
    int get_xp(){ return xp;}
    Player (string s ="None" , int a = 0 , int b = 0);
    Player (const Player &source);
    ~Player();
    static get_num_players();           //its only have access of static member.
    };

#endif // _PLAYER_H_
