#include <iostream>
#include "Player.h"
using namespace std;
main(){
    Player frank;
    Player ayden("ady" , 7);
    frank.set_name("Aadi");
    cout<<frank.get_name()<<endl;
    frank.set_age(12);
    cout<<frank.get_age()<<endl;
    
    ayden.set_name("Addy");
    cout<<ayden.get_name()<<endl;
    ayden.set_age(52);
    cout<<ayden.get_age()<<endl;
}