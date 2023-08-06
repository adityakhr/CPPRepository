#include "Player.h"
using namespace std;
int Player::num_players{0};
Player::Player(string s , int a  , int b )
:name{s} , age {a} , xp{b}
{
    ++num_players;
}

Player::Player(const Player &source)
:name{source.name} , age{source.age} , xp{source.xp}
{
    ++num_players;
}

Player::~Player()
{
    --num_players;
//    cout<<"Destructor is called.\n";
}

int Player::get_num_players(){
    return num_players;
    }

