#ifndef _PLAYER_H_
#define _PLAYER_H_
#include<string>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int experience;
public:
    Player();
    cout<<"No arguement constructor called.\n";
    
    Player(string);
    cout<<"String arguement is called.\n";
    
    Player(string name ,int health);
    cout<<"Double arguement constructor is called.\n";
    
    Player (string name , int health , int experience);
    cout<<"Three arguement constructor is called.\n";
    
    ~Player();
    cout<<"Destructor is called.\n"l;
    
    
};

#endif // _PLAYER_H_
