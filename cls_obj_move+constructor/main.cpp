#include <iostream>
#include <vector>
using namespace std;

class Move{
private:
    int *data;
public:
    void set_data_value(int i){
        *data = i;
        }
    int get_data_value(){
        return *data;
        }
    //constructor
    Move(int d);
   //copy constructor
    Move (const Move &source);
    //move constructor
    Move (Move &&source);
    //destructor
    ~Move();
    };
    
    Move::Move(int d){
        data = new int ;
        *data = d;
        cout<<"Constructor is called for: "<<*data<<endl;
        }
    Move::Move(const Move &source)
    :Move{*source.data}{
//        data = new int ;
//        *data = d;
          cout<<" copy Constructor is called for: "<<*data<<endl;
        }
    Move ::Move (Move && source)
    :Move {*source.data}{
        source.data = nullptr;
        cout<<"Move Constructor is called for: "<<*data<<endl;
        }
        
    Move::~Move(){
        if(data!= nullptr){
            cout<<"destructor is called for: "<<*data<<endl;
            }
            else{
                cout<<"destructor is called for nullptr"<<endl;
                }
        delete data;
        }
main (){
    vector <Move> vec{};
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    
    }