#include <iostream>
#include <string>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int experience;
public:
    Player(){
    cout<<"No arguement constructor called.\n";}
    
    Player(string){
    cout<<"String arguement is called.\n";}
    
    Player(string name ,int health){
    cout<<"Double arguement constructor is called.\n";}
    
    Player (string name , int health , int experience){
    cout<<"Three arguement constructor is called.\n";}
    
    ~Player(){
    cout<<"Destructor is called.\n";}
    
    void set_name(string s);
};

void Player::set_name(string s )
{
    name=s;
}


int main(){
{
    Player frank;
    frank.set_name("Aditya");
}
{
    Player hero("Hero");
    hero.set_name("Hero is back");
}
{
    Player hero("Hero"  , 89);
    hero.set_name("Hero is back");
}
{
    Player hero("Hero", 89 , 5);
    hero.set_name("Hero is back");
}    

//    Player*enemy = new Player;
//    
//    (*enemy).set_name("abhi");
//    
//    delete enemy;
//    
//    Player *level_boss = new Player ("abhijeet" , 85 , 7);
//    level_boss->set_name("Revel");
//    
//    delete level_boss;


}