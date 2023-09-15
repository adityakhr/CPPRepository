#include <iostream>
using namespace std;

class Player {
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
    };

main(){
    Player frank;
    frank.set_name("Aadi");
    cout<<frank.get_name()<<endl;
    frank.set_age(12);
    cout<<frank.get_age()<<endl;
    }
