#include <iostream>
using namespace std;

class Shallow{
private:
    int *data;
public:
    void set_value(int a){
        *data = a;
        }
    int get_value(){
        return *data;
        }
    //constructor
    Shallow(int d){
        data = new int;
        *data = d;
        }
    //destructor
    ~Shallow(){
        delete data;
        cout<<"destructor freeing data.\n";
        }
    //copy constructor
    Shallow(const Shallow &source)
    :data{source.data}{
        cout<<"Copy constructor shallow-copy.\n";
        }
    
    
    };
void display_shallow (Shallow s){
    
    cout<<s.get_value()<<endl;
    }
main(){
    Shallow obj1{100};
    display_shallow(obj1);
    Shallow obj2 {obj1};
    obj2.set_value(1000);
    display_shallow(obj2);
    }