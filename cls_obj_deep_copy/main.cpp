#include <iostream>
using namespace std;

class Deep{
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
    Deep(int d){
        data = new int;
        *data = d;
        }
    //destructor
    ~Deep(){
        delete data;
        cout<<"destructor freeing data.\n";
        }
    //copy constructor
    Deep(const Deep &source){
        data = new int ;
        *data = *source.data;
        cout<<"Copy constructor deep-copy.\n";
        }
    
    };
void display_deep (Deep s){
    
    cout<<s.get_value()<<endl;
    }
main(){
    Deep obj1{100};
    display_deep(obj1);
    Deep obj2 {obj1};
    obj2.set_value(1000);
    display_deep(obj2);
    }