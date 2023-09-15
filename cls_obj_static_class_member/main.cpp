#include <iostream>
#include "Player.h"
using namespace std;
void display_active_players(){
    cout<<"Active players are: "<<Player::get_num_players()<<endl;
    }
int main(){
    
    display_active_players();
    Player frank;
    display_active_players();
    {
    Player ayden;
    display_active_players();    
    }
    display_active_players();
    Player *enemy = new Player("Enemy" , 100 , 50);
    display_active_players();
    delete enemy;
    display_active_players();
    }